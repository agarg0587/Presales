/*-----------------------------------------------------------------------------
    Name: any_char
    Recorded By: netstorm
    Date of recording: 03/25/2013 06:40:30
    Flow details:
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void any_char()
{
    
    ns_web_url ("HomePage_jsp_5",
        "URL=http://127.0.0.1/nsecom/jsp/HomePage.jsp",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1364217020217.png",
        "Snapshot=webpage_1364217020451.png",
        INLINE_URLS,
            "URL=http://127.0.0.1/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/css/style.css", END_INLINE
    );

    ns_page_think_time(6.053);

    //Page Auto splitted for Button 'search' Clicked by User
    ns_web_url ("SearchProductServlet",
        "URL=http://127.0.0.1/nsecom/SearchProductServlet?keyword=74858%25%24%25%5E%26",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364217026441.png",
        "Snapshot=webpage_1364217026738.png",
        INLINE_URLS,
            "URL=http://127.0.0.1/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(3.853);

}
