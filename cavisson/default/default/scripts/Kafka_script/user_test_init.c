#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

#define CLEAR_WHITE_SPACE_FROM_END(ptr) { int end_len = strlen(ptr); \ 
                                          while((ptr[end_len - 1] == ' ') || ptr[end_len - 1] == '\t') { \
                                            ptr[end_len - 1] = '\0'; \
                                            end_len = strlen(ptr); \
                                          }\
                                        }


char ip[10][20];
char topic[10][32];
int num_rows;

int kafka_get_tokens(char *read_buf, char *fields[], char *token)
{
  char *ptr;
  char *token_ptr = NULL;
  int i = 0;

  ptr = read_buf;
  while((token_ptr = strtok(ptr, token)) != NULL)
  {
    ptr = NULL;
    fields[i] = token_ptr;
    i++;
  }
  //return i;
}

int user_test_init()
{
  FILE *fp = NULL;
  char line[100];
  char *ptr = NULL;
  char *fields[2];

  if ((fp = fopen("/home/netstorm/work/scripts/OCF/OCF/RTES_KafkaNew/ip_data_file.txt", "r")) != NULL)
  {
    while(fgets(line, 100, fp) != NULL)
    {
      if(line[0] == '\n' || line[0] == '#') {
        line[0] = '\0';
        continue;
      }
      if((ptr = strchr(line, '\n')) != NULL)
        *ptr = '\0';
      kafka_get_tokens(line, fields, ",");
 
      strcpy(ip[num_rows], fields[0]);
      strcpy(topic[num_rows], fields[1]);
      CLEAR_WHITE_SPACE_FROM_END(topic[num_rows]);
      num_rows++;
    } 
  
    fclose(fp);
  }
  else {
    fprintf(stderr, "file doesn't exist\n");
       exit(-1) ;
  }
  return 0;
}
