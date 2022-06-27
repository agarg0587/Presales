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
extern FlowReturn AuthorizePayment();
extern FlowReturn flowV1();
extern FlowReturn flowV2();
extern FlowReturn flowV3();
// End - List of used flows in the runlogic


void runlogic()
{
    NSDL2_RUNLOGIC(NULL, NULL, "Executing init_script()");

    init_script();

    NSDL2_RUNLOGIC(NULL, NULL, "Executing percent block - Start");
    {
        UPDATE_USER_FLOW_COUNT(0)
        int Startpercent = ns_get_random_number_int(1, 10000);

        NSDL2_RUNLOGIC(NULL, NULL, "Percentage random number for block - Start = %d", Startpercent);

        if(Startpercent <= 3000)
        {
            NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - AuthorizePayment (pct value = 30.0%)");
            UPDATE_USER_FLOW_COUNT(1)
            AuthorizePayment();
        }
        else if(Startpercent <= 10000)
        {

            NSDL2_RUNLOGIC(NULL, NULL, "Executing percent block - VersionSelect (pct value = 70.0%)");
            {
                UPDATE_USER_FLOW_COUNT(3)
                int VersionSelectpercent = ns_get_random_number_int(1, 10000);

                NSDL2_RUNLOGIC(NULL, NULL, "Percentage random number for block - VersionSelect = %d", VersionSelectpercent);

                if(VersionSelectpercent <= 3000)
                {
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - flowV1 (pct value = 30.0%)");
                    UPDATE_USER_FLOW_COUNT(4)
                    flowV1();
                }
                else if(VersionSelectpercent <= 6000)
                {
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - flowV2 (pct value = 30.0%)");
                    UPDATE_USER_FLOW_COUNT(6)
                    flowV2();
                }
                else if(VersionSelectpercent <= 10000)
                {
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - flowV3 (pct value = 40.0%)");
                    UPDATE_USER_FLOW_COUNT(8)
                    flowV3();
                }
            }
        }
    }

    NSDL2_RUNLOGIC(NULL, NULL, "Executing ns_exit_session()");
    ns_exit_session();
}
