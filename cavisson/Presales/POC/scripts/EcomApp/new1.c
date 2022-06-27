/*-----------------------------------------------------------------------------
    Name: new1
    Recorded By: netstorm
    Date of recording: 04/22/2013 12:27:50
    Flow details:
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void new1()
{
    ns_web_url ("index_2",
        "URL=http://192.168.1.92:19001/nsecom",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "REDIRECT=YES",
        "LOCATION=http://192.168.1.92:19001/nsecom/",
        "PreSnapshot=webpage_1366613634359.png",
        "Snapshot=webpage_1366613634687.png",
        INLINE_URLS,
            "URL=http://192.168.1.92:19001/nsecom/", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=http://192.168.1.92:19001/nsecom/images/logo.png", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE
    );

    ns_page_think_time(5.631);

    //Page Auto splitted for Link 'nsecom' Clicked by User
    ns_web_url ("home_2",
        "URL=http://192.168.1.92:19001/nsecom/home",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1366613640256.png",
        "Snapshot=webpage_1366613640724.png",
        INLINE_URLS,
            "URL=http://192.168.1.92:19001/nsecom/images/nsecomlogo.png", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE
    );

    ns_page_think_time(4.649);

    //Page Auto splitted for Button 'search' Clicked by User
    ns_web_url ("searchProduct_2",
        "URL=http://192.168.1.92:19001/nsecom/searchProduct?keyword=jeans",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1366613645295.png",
        "Snapshot=webpage_1366613648321.png"
    );

    ns_page_think_time(18.283);

}
