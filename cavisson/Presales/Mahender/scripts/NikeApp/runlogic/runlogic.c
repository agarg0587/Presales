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
extern FlowReturn Login();
extern FlowReturn GetAttachmentURL();
extern FlowReturn UploadAttachment();
extern FlowReturn CreateIncident();
extern FlowReturn GetIncident();
extern FlowReturn GetAsset();
extern FlowReturn GetConfig();
// End - List of used flows in the runlogic


void runlogic()
{
    NSDL2_RUNLOGIC(NULL, NULL, "Executing init_script()");

    init_script();

    NSDL2_RUNLOGIC(NULL, NULL, "Executing sequence block - Start");
    {
        UPDATE_USER_FLOW_COUNT(0)

        NSDL2_RUNLOGIC(NULL, NULL, "Executing percent block - APISelection");
        {
            UPDATE_USER_FLOW_COUNT(1)
            int APISelectionpercent = ns_get_random_number_int(1, 10000);

            NSDL2_RUNLOGIC(NULL, NULL, "Percentage random number for block - APISelection = %d", APISelectionpercent);

            if(APISelectionpercent <= 10000)
            {

                NSDL2_RUNLOGIC(NULL, NULL, "Executing sequence block - Block1 (pct value = 100.0%)");
                {
                    UPDATE_USER_FLOW_COUNT(2)
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - Login");
                    UPDATE_USER_FLOW_COUNT(3)
                    Login();
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - GetAttachmentURL");
                    UPDATE_USER_FLOW_COUNT(5)
                    GetAttachmentURL();
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - UploadAttachment");
                    UPDATE_USER_FLOW_COUNT(7)
                    UploadAttachment();
                }
            }
            else if(APISelectionpercent <= 10000)
            {

                NSDL2_RUNLOGIC(NULL, NULL, "Executing sequence block - Block2 (pct value = 0.0%)");
                {
                    UPDATE_USER_FLOW_COUNT(9)
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - GetAttachmentURL");
                    UPDATE_USER_FLOW_COUNT(10)
                    GetAttachmentURL();
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - UploadAttachment");
                    UPDATE_USER_FLOW_COUNT(12)
                    UploadAttachment();
                }
            }
        }

        NSDL2_RUNLOGIC(NULL, NULL, "Executing sequence block - IncidentActionSelection");
        {
            UPDATE_USER_FLOW_COUNT(14)

            NSDL2_RUNLOGIC(NULL, NULL, "Executing percent block - Block3");
            {
                UPDATE_USER_FLOW_COUNT(15)
                int Block3percent = ns_get_random_number_int(1, 10000);

                NSDL2_RUNLOGIC(NULL, NULL, "Percentage random number for block - Block3 = %d", Block3percent);

                if(Block3percent <= 7000)
                {
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - CreateIncident (pct value = 70.0%)");
                    UPDATE_USER_FLOW_COUNT(16)
                    CreateIncident();
                }
                else if(Block3percent <= 10000)
                {
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - GetIncident (pct value = 30.0%)");
                    UPDATE_USER_FLOW_COUNT(18)
                    GetIncident();
                }
            }

            NSDL2_RUNLOGIC(NULL, NULL, "Executing count block - Block4. Min = 3, Max = 4");
            {
                UPDATE_USER_FLOW_COUNT(20)
                int Block4Count = ns_get_random_number_int(3, 4);
                int Block4Loop;
                 for(Block4Loop = 1; Block4Loop <= Block4Count; Block4Loop++)
                {
                    NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - GetIncident");
                    UPDATE_USER_FLOW_COUNT(21)
                    GetIncident();
                }
            }
        }
        NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - GetAsset");
        UPDATE_USER_FLOW_COUNT(23)
        GetAsset();
        NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - GetConfig");
        UPDATE_USER_FLOW_COUNT(25)
        GetConfig();
    }

    NSDL2_RUNLOGIC(NULL, NULL, "Executing ns_exit_session()");
    ns_exit_session();
}
