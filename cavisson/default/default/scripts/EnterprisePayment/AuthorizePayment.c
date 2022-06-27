/*-----------------------------------------------------------------------------
    Name: AuthorizePayment
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


void AuthorizePayment()
{
    ns_start_transaction("AuthorizePaymentService");    
    ns_web_url("PaymentServicesV1_1",
        "URL=http://127.0.0.1/pos/EnterprisePaymentServices",
        "METHOD=POST",        
        "HEADER=Accept:application/json",
        "HEADER=Content-Type:application/json",
        "HEADER=X-Payment-experimentation:V1",
        BODY_BEGIN,
		"{
  "RequestType": "AuthorizePayment",
  "Version": "V1",
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
    ns_end_transaction("AuthorizePaymentService", NS_AUTO_STATUS);    
    ns_page_think_time(0);

}