/*-----------------------------------------------------------------------------
    Desc :- set the loop count to below given value to achieve corresponding TPS.
      Loop Count  :- TPS
        1700        3352
	2100        3850
	2250        4235    
 
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <ctype.h>
#include <signal.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <syslog.h>
#include <time.h>
#include <sys/time.h>
#include <fcntl.h>
#include <pthread.h>
#include "ns_string.h"
#include "util.c"
#include "/opt/librdkafka-master/src/rdkafka.h"

#define MAX 1024*12000

pthread_mutex_t producer_mutex;
char buf[MAX] = "";
static int quiet = 0;
extern char ip[10][20];
extern char topic[10][32];
extern int num_rows;

int msg_delivery_flag[10];
static void logger (const rd_kafka_t *rk, int level, const char *fac, const char *buf) 
{
  struct timeval tv;
  gettimeofday(&tv, NULL);
  fprintf(stderr, "%u.%03u RDKAFKA-%i-%s: %s: %s\n", (int)tv.tv_sec, (int)(tv.tv_usec / 1000),
            	   level, fac, rk ? rd_kafka_name(rk) : NULL, buf);
}

/**
 * Message delivery report callback.
 * Called once for each message.
 * See rdkafka.h for more information.
 */
static void msg_delivered (rd_kafka_t *rk, void *payload, size_t len, int error_code, void *opaque, void *msg_opaque)
{

  int idx = *((int *)msg_opaque);
  msg_delivery_flag[idx] = 1;

}

void *kafka_call_back(void *indx)
{
  //fprintf(stderr, "Function kafka_call_back called\n"); 
  rd_kafka_topic_t *rkt;
  int partition = RD_KAFKA_PARTITION_UA;
  rd_kafka_conf_t *conf;
  rd_kafka_topic_conf_t *topic_conf;
  char errstr[512];
  char tmp[16];
  int run = 1; 
  int idx = *((int *)indx);
  rd_kafka_t *rk;
  int len = 0;
  int msg_count = 0;

  conf = rd_kafka_conf_new();

  snprintf(tmp, sizeof(tmp), "%i", SIGIO);
  rd_kafka_conf_set(conf, "internal.termination.signal", tmp, NULL, 0);

  topic_conf = rd_kafka_topic_conf_new();

  /* Set up a message delivery report callback.
  * It will be called once for each message, either on successful
  * delivery to broker, or upon failure to deliver to broker. */

  /* If offset reporting (-o report) is enabled, use the
   * richer dr_msg_cb instead. */
   rd_kafka_conf_set_dr_cb(conf, msg_delivered);

  /* Create Kafka handle */
  if (!(rk = rd_kafka_new(RD_KAFKA_PRODUCER, conf,
                          errstr, sizeof(errstr)))) {
     fprintf(stderr, "%% Failed to create new producer: %s\n", errstr);
     return ;
  }
  /* Add brokers */
  if (rd_kafka_brokers_add(rk, ip[idx]) == 0)
  {
    fprintf(stderr, "%% No valid brokers specified\n"); 
    return ;
  }

  /* Create topic */
  rkt = rd_kafka_topic_new(rk, topic[idx], topic_conf);
  topic_conf = NULL; /* Now owned by topic */
  pthread_mutex_lock(&producer_mutex);
     char buf[33000]="";
    // char get_time_buf[32],MBUFF[10];
  //   char epoch_time[32];
     char interval[10];
       int i;
       for (i=0;i<16000;i++)
       {
       	//ns_page_think_time(0.001);
    
      //   gettime(get_time_buf, 32);
       //  ns_save_string(get_time_buf, "Date_Par");
      // sprintf(epoch_time, "%lu", epoch());
      //  ns_save_string(epoch_time, "Epoch_Par");
         ns_advance_param("payload");
       // sprintf(interval, "%d", i);
 //       ns_save_string(interval, "Perf_Count");
/*       ns_advance_param("Date_Par1");
	   ns_advance_param("Date_Par2");
	   ns_advance_param("Date_Par3");
*/	      
	//printf("Count %d\n", i);
//	printf("******* %s",ns_eval_string("Perf_Count"));
//	printf("Date %s\n", get_time_buf);
       // printf("Date %s\n", ns_eval_string("{Date_Par}"));
	//printf("Date1 %s\n", ns_eval_string("{Date_Par1}"));
	//printf("Date2 %s\n", ns_eval_string("{Date_Par2}"));
	//printf("Date3 %s\n", ns_eval_string("{Date_Par3}"));
		
//       ns_advance_param("Date_Par");
       strcpy(buf, ns_eval_string("{payload}"));
      // strcpy(buf2, "{");
       strcat(buf, ns_eval_string(buf));
       //strcat(buf, ns_eval_string(buf));
        //strcpy(buf, buf2);
 //       strcpy(buf, buf2);
        len = strlen(buf);
	//printf("This is the final one %s\n", buf);
	
     //fprintf(stderr, "@@@@@@@@@@@@@@@len = %d, buf = [%s]\n", len, buf);
     ns_start_transaction("kafka_producer");
     /* Send/Produce message. */
     if (rd_kafka_produce(rkt, partition, RD_KAFKA_MSG_F_COPY,
                             /* Payload and length */
                             buf, len,
                             /* Optional key and its length */
                             NULL, 0,
                             /* Message opaque, provided in
                              * delivery report callback as
                              * msg_opaque. */
                             (void *)&idx) != 0) {
       fprintf(stderr, "%% Failed to produce to topic %s "
		      "partition %i: %s\n", rd_kafka_topic_name(rkt), partition,
                      rd_kafka_err2str(rd_kafka_last_error()));
       /* Poll to handle delivery reports */
       ns_end_transaction_as("kafka_producer", NS_AUTO_STATUS, "kafka_producer_Error");
       rd_kafka_poll(rk, 0);
     }
	ns_end_transaction_as("kafka_producer", NS_AUTO_STATUS, "kafka_producer_Sucess");
    }
       // ns_page_think_time(1);
	rd_kafka_poll(rk, 0);

  /* Wait for messages to be delivered */
   while (run && rd_kafka_outq_len(rk) > 0)
     rd_kafka_poll(rk, 100);

  if(!msg_delivery_flag[idx])
    ns_end_transaction_as("kafka_producer", NS_AUTO_STATUS, "kafka_producer_ERROR");
     //}
     rd_kafka_poll(rk, 0);

  /* Destroy topic */
  rd_kafka_topic_destroy(rkt);

  /* Destroy the handle */
  rd_kafka_destroy(rk);
  
  if (topic_conf)
    rd_kafka_topic_conf_destroy(topic_conf);

  /* Let background threads clean up and terminate cleanly. */
  run = 100;
  while (run-- > 0 && rd_kafka_wait_destroyed(1000) == -1)
    printf("Waiting for librdkafka to decommission\n");
  if (run <= 0)
    rd_kafka_dump(stdout, rk); 

  pthread_mutex_unlock(&producer_mutex);
  ns_page_think_time(1);

  return ;
}

void kafka_client()
{
  pthread_t thread_id[10];
  pthread_attr_t attr;
  int ret = 0;   //return the thread value
  int idx[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  FILE *fp = NULL;
  char line[50];  
  char *ptr = NULL;
  int  j = 0;
  char *fields[2];
   
  pthread_attr_init(&attr);
  pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

  for (j = 0; j < num_rows; j++)
  {
    ret = pthread_create(&thread_id[j], &attr, kafka_call_back, (void *)&idx[0]);
    if(ret)
    {
      fprintf(stderr, "ERROR: return code from pthread_create is = %d \n", ret);
      return ;
    }

  }
  pthread_attr_destroy(&attr);
  for (j = 0; j < num_rows; j++)
  {
    if(pthread_join(thread_id[j], NULL))
    {
      fprintf(stderr, "Error joining thread\n");
      return ;
    }
  }
  return ;
}
