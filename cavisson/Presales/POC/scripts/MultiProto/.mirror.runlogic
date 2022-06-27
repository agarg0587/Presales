#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"
#ifdef ENABLE_RUNLOGIC_PROGRESS
  #define UPDATE_USER_FLOW_COUNT(count) update_user_flow_count(count);
#else
  #define UPDATE_USER_FLOW_COUNT(count)
#endif


extern int init_script();
extern int exit_script();

typedef void FlowReturn;

// Note: Following extern declaration is used to find the list of used flows. Do not delete/edit it
// Start - List of used flows in the runlogic
extern FlowReturn S01_Https();
extern FlowReturn S02_Ftp();
// End - List of used flows in the runlogic


void runlogic()
{
    NSDL2_RUNLOGIC(NULL, NULL, "Executing init_script()");

    init_script();

    NSDL2_RUNLOGIC(NULL, NULL, "Executing percent block - Block1");
    {
        UPDATE_USER_FLOW_COUNT(0)
        int Block1percent = ns_get_random_number_int(1, 10000);

        NSDL2_RUNLOGIC(NULL, NULL, "Percentage random number for block - Block1 = %d", Block1percent);

        if(Block1percent <= 7500)
        {
            NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - S01_Https (pct value = 75.0%)");
            UPDATE_USER_FLOW_COUNT(1)
            S01_Https();
        }
        else if(Block1percent <= 10000)
        {
            NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - S02_Ftp (pct value = 25.0%)");
            UPDATE_USER_FLOW_COUNT(9)
            S02_Ftp();
        }
    }

    NSDL2_RUNLOGIC(NULL, NULL, "Executing ns_exit_session()");
    ns_exit_session();
}
