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
extern FlowReturn flowV1();
extern FlowReturn flowV2();
// End - List of used flows in the runlogic


void runlogic()
{
    NSDL2_RUNLOGIC(NULL, NULL, "Executing init_script()");

    init_script();

    NSDL2_RUNLOGIC(NULL, NULL, "Executing count block - Block1. Min = 100, Max = 100");
    {
        UPDATE_USER_FLOW_COUNT(0)
        int Block1Count = ns_get_random_number_int(100, 100);
        int Block1Loop;
         for(Block1Loop = 1; Block1Loop <= Block1Count; Block1Loop++)
        {

            NSDL2_RUNLOGIC(NULL, NULL, "Executing percent block - PctBlock, SelectedCount = %d, Iteration = %d",Block1Count, Block1Loop);
            {
                UPDATE_USER_FLOW_COUNT(1)
                int PctBlockpercent = ns_get_random_number_int(1, 10000);

                NSDL2_RUNLOGIC(NULL, NULL, "Percentage random number for block - PctBlock = %d", PctBlockpercent);

                if(PctBlockpercent <= 2500)
                {
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - flowV1 (pct value = 25.0%)");
                    UPDATE_USER_FLOW_COUNT(2)
                    flowV1();
                }
                else if(PctBlockpercent <= 10000)
                {
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - flowV2 (pct value = 75.0%)");
                    UPDATE_USER_FLOW_COUNT(4)
                    flowV2();
                }
            }
        }
    }

    NSDL2_RUNLOGIC(NULL, NULL, "Executing ns_exit_session()");
    ns_exit_session();
}
