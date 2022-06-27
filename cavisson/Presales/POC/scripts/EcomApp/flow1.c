/*-----------------------------------------------------------------------------
    Name: flow1
    Recorded By: netstorm
    Date of recording: 04/15/2013 11:13:31
    Flow details:
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow1()
{
    ns_web_url ("home",
        "URL=http://191.168.1.92:19001/nsecom/home",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1366004585751.png",
        "Snapshot=webpage_1366004607729.png",
        INLINE_URLS,
            "URL=http://191.168.1.92:19001/nsecom/home", END_INLINE
    );

    ns_page_think_time(69.182);

}
