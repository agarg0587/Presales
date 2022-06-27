/*-----------------------------------------------------------------------------
    Name: india_cart
    Recorded By: netstorm
    Date of recording: 03/25/2013 06:46:09
    Flow details:
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void india_cart()
{
    ns_web_url ("index_4",
        "URL=http://192.168.1.86:19001/nsecom",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "REDIRECT=YES",
        "LOCATION=http://192.168.1.86:19001/nsecom/",
        "PreSnapshot=webpage_1364217345479.png",
        "Snapshot=webpage_1364217345650.png",
        INLINE_URLS,
            "URL=http://192.168.1.86:19001/nsecom/", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=http://192.168.1.86:19001/nsecom/images/logo.png", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE
    );

    ns_page_think_time(3.214);

    ns_web_url ("HomePage_jsp_10",
        "URL=http://192.168.1.86:19001/nsecom/jsp/HomePage.jsp",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1364217348879.png",
        "Snapshot=webpage_1364217349098.png",
        INLINE_URLS,
            "URL=http://192.168.1.86:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(2.98);

    //Page Auto splitted for Button 'search' Clicked by User
    ns_web_url ("SearchProductServlet_5",
        "URL=http://192.168.1.86:19001/nsecom/SearchProductServlet?keyword=pants",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364217351999.png",
        "Snapshot=webpage_1364217352467.png",
        INLINE_URLS,
            "URL=http://192.168.1.86:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(1.732);

    //Page Auto splitted for Image Link '' Clicked by User
    ns_web_url ("ProductPageServlet_4",
        "URL=http://192.168.1.86:19001/nsecom/ProductPageServlet?productid=Pant006&upc=PantUPC11116&prodImage=pants6.png&prodPrice=69.99",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364217353887.png",
        "Snapshot=webpage_1364217354324.png",
        INLINE_URLS,
            "URL=http://192.168.1.86:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(2.527);

    //Page Auto splitted for Button 'Add to cart' Clicked by User
    ns_web_url ("AddToBagServlet_4",
        "URL=http://192.168.1.86:19001/nsecom/AddToBagServlet?size=2&productid=Pant006&price=69.99&upc=PantUPC11116&prodImage=pants6.png&quantity=2",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364217356633.png",
        "Snapshot=webpage_1364217357023.png",
        INLINE_URLS,
            "URL=http://192.168.1.86:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(1.029);

    //Page Auto splitted for Button 'Continue Checkout' Clicked by User
    ns_web_url ("ShippingPage_jsp_2",
        "URL=http://192.168.1.86:19001/nsecom/jsp/ShippingPage.jsp?productid=Pant006&upc=PantUPC11116&size=2&color=blue&quantity=2&price=139.98&status=true&cartId=Cart20130325064534436",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364217357849.png",
        "Snapshot=webpage_1364217358208.png",
        INLINE_URLS,
            "URL=http://192.168.1.86:19001/nsecom/jsp/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://192.168.1.86:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(6.084);

    //Page Auto splitted for Button 'Place Order' Clicked by User
    ns_web_url ("CheckOutServlet_2",
        "URL=http://192.168.1.86:19001/nsecom/CheckOutServlet?name=g&address=h&city=d&PostalCode=s&country=India&productid=Pant006&upc=PantUPC11116&size=2&color=blue&quantity=2&price=139.98&status=true&cartId=Cart20130325064534436&country=document.frmMain2.country.value",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364217364277.png",
        "Snapshot=webpage_1364217364651.png",
        INLINE_URLS,
            "URL=http://192.168.1.86:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(4.258);

}
