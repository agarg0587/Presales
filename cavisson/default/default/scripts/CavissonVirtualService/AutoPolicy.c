/*-----------------------------------------------------------------------------
    Name: AutoPolicy
    Generated By: cavisson
    Date of generation: 04/19/2022 02:09:12
    Flow details:
    Build details: 4.8.0 (build# 84)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"


void AutoPolicy()
{
	ns_start_transaction("PersAutoPolicyAddRq");
    ns_web_url ("PersAutoPolicyAddRq",
        "URL=https://66.220.31.137:8443/webservices/getpolicyinfo",
        "METHOD=POST",
        BODY_BEGIN,
            "<?xml version="1.0" encoding="UTF-8"?>
<soap:Envelope>
   <soap:Header>
      <RqUID>fgts76o28573</RqUID>
      <sessionid>590249-ghskor-256-2022</sessionid>
   </soap:Header>
   <soap:Body>
      <PersAutoPolicyAddRq>
         <Policy>
            <InsuranceCode>00001</InsuranceCode>
            <PolicyNumber>2019094131002462</PolicyNumber>
            <SourceSystem>CSCR</SourceSystem>
            <IsGuestAccount>N</IsGuestAccount>
            <CustLangPref>ENU</CustLangPref>
         </Policy>
      </PersAutoPolicyAddRq>
   </soap:Body>
</soap:Envelope>",
        BODY_END
    );

    ns_end_transaction("PersAutoPolicyAddRq", NS_AUTO_STATUS);

    ns_page_think_time(10);
}