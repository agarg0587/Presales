/*-----------------------------------------------------------------------------
    Name: db_error
    Recorded By: netstorm
    Date of recording: 03/25/2013 06:44:27
    Flow details:
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void db_error()
{
   

    ns_web_url ("HomePage_jsp_8",
        "URL=http://192.168.1.92:19001/nsecom/jsp/HomePage.jsp",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1364217236778.png",
        "Snapshot=webpage_1364217237012.png",
        INLINE_URLS,
            "URL=http://192.168.1.92:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(4.743);

    //Page Auto splitted for Button 'search' Clicked by User
    ns_web_url ("SearchProductServlet_2",
        "URL=http://192.168.1.92:19001/nsecom/SearchProductServlet?keyword=pants",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364217241676.png",
        "Snapshot=webpage_1364217242534.png",
        INLINE_URLS,
            "URL=http://192.168.1.92:19001/nsecom/images/pants1.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://192.168.1.92:19001/nsecom/images/pants2.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://192.168.1.92:19001/nsecom/images/pants3.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://192.168.1.92:19001/nsecom/images/pants4.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://192.168.1.92:19001/nsecom/images/pants5.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://192.168.1.92:19001/nsecom/images/pants6.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://192.168.1.92:19001/nsecom/images/pants7.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://192.168.1.92:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(1.856);

    //Page Auto splitted for Image Link '' Clicked by User
    ns_web_url ("ProductPageServlet",
        "URL=http://192.168.1.92:19001/nsecom/ProductPageServlet?productid=Pant005&upc=PantUPC11115&prodImage=pants5.png&prodPrice=59.99",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364217244344.png",
        "Snapshot=webpage_1364217244796.png",
        INLINE_URLS,
            "URL=http://192.168.1.92:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(2.464);

    //Page Auto splitted for Button 'Add to cart' Clicked by User
    ns_web_url ("AddToBagServlet",
        "URL=http://192.168.1.92:19001/nsecom/AddToBagServlet?size=2&productid=Pant005&price=59.99&upc=PantUPC11115&prodImage=pants5.png&quantity=2",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364217247011.png",
        "Snapshot=webpage_1364217251488.png",
        INLINE_URLS,
            "URL=http://192.168.1.92:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=CARTID;JSESSIONID;", END_INLINE
    );

    ns_page_think_time(4.212);

    //Page Auto splitted for Button 'search' Clicked by User
    ns_web_url ("SearchProductServlet_3",
        "URL=http://192.168.1.92:19001/nsecom/SearchProductServlet?keyword=pants",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=CARTID;JSESSIONID;",
        "PreSnapshot=webpage_1364217255591.png",
        "Snapshot=webpage_1364217255981.png",
        INLINE_URLS,
            "URL=http://192.168.1.92:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=CARTID;JSESSIONID;", END_INLINE
    );

    ns_page_think_time(1.513);

    //Page Auto splitted for Image Link '' Clicked by User
    ns_web_url ("ProductPageServlet_2",
        "URL=http://192.168.1.92:19001/nsecom/ProductPageServlet?productid=Pant005&upc=PantUPC11115&prodImage=pants5.png&prodPrice=59.99",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=CARTID;JSESSIONID;",
        "PreSnapshot=webpage_1364217257229.png",
        "Snapshot=webpage_1364217257697.png",
        INLINE_URLS,
            "URL=http://192.168.1.92:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=CARTID;JSESSIONID;", END_INLINE
    );

    ns_page_think_time(3.682);

    //Page Auto splitted for Button 'Add to cart' Clicked by User
    ns_web_url ("AddToBagServlet_2",
        "URL=http://192.168.1.92:19001/nsecom/AddToBagServlet?size=2&productid=Pant005&price=59.99&upc=PantUPC11115&prodImage=pants5.png&quantity=3",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=CARTID;JSESSIONID;",
        "PreSnapshot=webpage_1364217261098.png",
        "Snapshot=webpage_1364217261457.png",
        INLINE_URLS,
            "URL=http://192.168.1.92:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=CARTID;JSESSIONID;", END_INLINE
    );

    ns_page_think_time(5.881);

}
