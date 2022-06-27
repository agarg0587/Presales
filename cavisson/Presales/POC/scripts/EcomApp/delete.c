/*-----------------------------------------------------------------------------
    Name: delete
    Recorded By: netstorm
    Date of recording: 03/25/2013 06:46:52
    Flow details:
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void delete()
{
    

    ns_web_url ("HomePage_jsp_11",
        "URL=http://192.168.255.2:19001/nsecom/jsp/HomePage.jsp",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1364217393308.png",
        "Snapshot=webpage_1364217393542.png",
        INLINE_URLS,
            "URL=http://192.168.255.2:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(8.33);

    //Page Auto splitted for Button 'search' Clicked by User
    ns_web_url ("SearchProductServlet_6",
        "URL=http://192.168.255.2:19001/nsecom/SearchProductServlet?keyword=pants",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364217401795.png",
        "Snapshot=webpage_1364217402200.png",
        INLINE_URLS,
            "URL=http://192.168.255.2:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(1.528);

    //Page Auto splitted for Image Link '' Clicked by User
    ns_web_url ("ProductPageServlet_5",
        "URL=http://192.168.255.2:19001/nsecom/ProductPageServlet?productid=Pant001&upc=PantUPC11111&prodImage=pants1.png&prodPrice=19.99",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364217403464.png",
        "Snapshot=webpage_1364217403932.png",
        INLINE_URLS,
            "URL=http://192.168.255.2:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(2.044);

    //Page Auto splitted for Button 'Add to cart' Clicked by User
    ns_web_url ("AddToBagServlet_5",
        "URL=http://192.168.255.2:19001/nsecom/AddToBagServlet?size=2&productid=Pant001&price=19.99&upc=PantUPC11111&prodImage=pants1.png&quantity=3",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364217405742.png",
        "Snapshot=webpage_1364217406116.png",
        INLINE_URLS,
            "URL=http://192.168.255.2:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(2.933);

    //Page Auto splitted for Button 'Cancel' Clicked by User
    ns_web_url ("CancelServlet",
        "URL=http://192.168.255.2:19001/nsecom/CancelServlet?productid=Pant001&upc=PantUPC11111&size=2&color=blue&quantity=3&price=59.97&status=true&cartId=Cart20130325064623560",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364217408877.png",
        "Snapshot=webpage_1364217409220.png",
        INLINE_URLS,
            "URL=http://192.168.255.2:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(3.401);

}
