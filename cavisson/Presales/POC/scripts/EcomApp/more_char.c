/*-----------------------------------------------------------------------------
    Name: more_char
    Recorded By: netstorm
    Date of recording: 03/25/2013 06:42:33
    Flow details:
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void more_char()
{
    
    ns_web_url ("HomePage_jsp_6",
        "URL=http://192.168.255.2:19001/nsecom/jsp/HomePage.jsp",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1364217114394.png",
        "Snapshot=webpage_1364217114628.png",
        INLINE_URLS,
            "URL=http://192.168.255.2:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://192.168.255.2:19001/nsecom/css/style.css", END_INLINE
    );

    ns_page_think_time(36.302);

    //Page Auto splitted for Button 'search' Clicked by User
    ns_web_url ("HomePage_jsp_7",
        "URL=http://192.168.255.2:19001/nsecom/jsp/HomePage.jsp?keyword=blue+jeans+for+girls+and+formal+black+shirt+for+boy+and+white+skirt+for+girls+with+tunic+top+of+blue+color",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364217150899.png",
        "Snapshot=webpage_1364217151180.png",
        INLINE_URLS,
            "URL=http://192.168.255.2:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(2.621);

}
