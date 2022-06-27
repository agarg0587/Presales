/*-----------------------------------------------------------------------------
    Name: blank
    Recorded By: netstorm
    Date of recording: 03/25/2013 06:38:54
    Flow details:
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void blank()
{
    
    //Page Auto splitted for Link 'nsecomWebProject' Clicked by User
    ns_web_url ("HomePage_jsp_3",
        "URL=http://192.168.255.2:19001/nsecom/jsp/HomePage.jsp",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1364216926507.png",
        "Snapshot=webpage_1364216927037.png",
        INLINE_URLS,
            "URL=http://192.168.255.2:19001/nsecom/images/nsecomlogo.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://192.168.255.2:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://192.168.255.2:19001/nsecom/css/style.css", END_INLINE
    );

    ns_page_think_time(4.228);

    //Page Auto splitted for Button 'search' Clicked by User
    ns_web_url ("HomePage_jsp_4",
        "URL=http://192.168.255.2:19001/nsecom/jsp/HomePage.jsp?keyword=",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364216931125.png",
        "Snapshot=webpage_1364216931375.png",
        INLINE_URLS,
            "URL=http://192.168.255.2:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(2.745);

}
