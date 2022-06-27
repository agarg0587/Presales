/*-----------------------------------------------------------------------------
    Name: flow
    Generated By: cavisson
    Date of generation: 02/12/2020 02:05:30
    Flow details:
    Build details: 4.1.15 (build# 202)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"


void flowV2()
{

    ns_start_transaction("PaymentServicesV2");    
    ns_web_url("PaymentServicesV2",
        "URL=https://66.220.31.137:8443/pos/EnterprisePaymentServices",
        "METHOD=POST",        
        "HEADER=Accept:application/json",
        "HEADER=Content-Type:application/json",
        "HEADER=X-Payment-experimentation:V2",
        BODY_BEGIN,
		"{
  "RequestType": "Association",
  "Version": "V2",
  "AssociateAccount": [
    {
      "accId": "12365498",
      "encryptedsecuritycode": "MTIzZXJkdA==",
      "phonenum": "8895945456",
      "originator": "national"
    }
  ]
}",
        BODY_END
        );
    ns_end_transaction("PaymentServicesV2", NS_AUTO_STATUS);    

}
