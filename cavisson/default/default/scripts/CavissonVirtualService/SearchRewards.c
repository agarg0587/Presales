/*-----------------------------------------------------------------------------
    Name: SearchRewards
    Generated By: cavisson
    Date of generation: 04/19/2022 02:10:07
    Flow details:
    Build details: 4.8.0 (build# 84)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"


void SearchRewards()
{
	 ns_start_transaction("searchRewards");
    ns_web_url ("searchRewards",
        "URL=https://66.220.31.137:8443/loyalty/loyaltyservice/v1",
        "METHOD=POST",
        BODY_BEGIN,
            "<?xml version="1.0" encoding="UTF-8"?>
<soap:Envelope>
   <soap:Header>
      <v1:request_header>
         <v11:requesterName>POS</v11:requesterName>
         <v11:clientSystemName>POS</v11:clientSystemName>
         <v11:clientSystemVersion>3.0</v11:clientSystemVersion>
         <v11:sourceCode>POS</v11:sourceCode>
         <v11:requestDate>2013-05-09</v11:requestDate>
      </v1:request_header>
   </soap:Header>
   <soap:Body>
      <v1:searchRewards>
         <v11:provider>cavisson</v11:provider>
         <v11:emailAddress>perfemail1306295190@example.com</v11:emailAddress>
      </v1:searchRewards>
   </soap:Body>
</soap:Envelope>",
        BODY_END
    );

    ns_end_transaction("searchRewards", NS_AUTO_STATUS);

    ns_page_think_time(10);
}
