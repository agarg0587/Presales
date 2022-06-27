/*-----------------------------------------------------------------------------
    Name: us_cart
    Recorded By: netstorm
    Date of recording: 03/25/2013 06:45:18
    Flow details:
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void us_cart()
{
    

    ns_web_url ("HomePage_jsp_9",
        "URL=http://192.168.255.2:19001/nsecom/jsp/HomePage.jsp",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1364217297165.png",
        "Snapshot=webpage_1364217297368.png",
        INLINE_URLS,
            "URL=http://192.168.255.2:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(2.559);

    //Page Auto splitted for Button 'search' Clicked by User
    ns_web_url ("SearchProductServlet_4",
        "URL=http://192.168.255.2:19001/nsecom/SearchProductServlet?keyword=jeans",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364217299849.png",
        "Snapshot=webpage_1364217300987.png",
        INLINE_URLS,
            "URL=http://192.168.255.2:19001/nsecom/images/jeans1.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://192.168.255.2:19001/nsecom/images/jeans2.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://192.168.255.2:19001/nsecom/images/jeans3.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://192.168.255.2:19001/nsecom/images/jeans4.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://192.168.255.2:19001/nsecom/images/jeans5.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://192.168.255.2:19001/nsecom/images/jeans6.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://192.168.255.2:19001/nsecom/images/jeans7.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://192.168.255.2:19001/nsecom/images/jeans8.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://192.168.255.2:19001/nsecom/images/jeans9.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://192.168.255.2:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(2.059);

    //Page Auto splitted for Image Link '' Clicked by User
    ns_web_url ("ProductPageServlet_3",
        "URL=http://192.168.255.2:19001/nsecom/ProductPageServlet?productid=Jeans009&upc=JeansUPC11119&prodImage=jeans9.png&prodPrice=99.99",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364217302953.png",
        "Snapshot=webpage_1364217303421.png",
        INLINE_URLS,
            "URL=http://192.168.255.2:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(2.012);

    //Page Auto splitted for Button 'Add to cart' Clicked by User
    ns_web_url ("AddToBagServlet_3",
        "URL=http://192.168.255.2:19001/nsecom/AddToBagServlet?size=2&productid=Jeans009&price=99.99&upc=JeansUPC11119&prodImage=jeans9.png&quantity=2",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364217305199.png",
        "Snapshot=webpage_1364217305589.png",
        INLINE_URLS,
            "URL=http://192.168.255.2:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(1.294);

    //Page Auto splitted for Button 'Continue Checkout' Clicked by User
    ns_web_url ("ShippingPage_jsp",
        "URL=http://192.168.255.2:19001/nsecom/jsp/ShippingPage.jsp?productid=Jeans009&upc=JeansUPC11119&size=2&color=blue&quantity=2&price=199.98&status=true&cartId=Cart20130325064443014",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364217306650.png",
        "Snapshot=webpage_1364217307196.png",
        INLINE_URLS,
            "URL=http://192.168.255.2:19001/nsecom/jsp/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://192.168.255.2:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(5.46);

    //Page Auto splitted for Button 'Place Order' Clicked by User
    ns_web_url ("CheckOutServlet",
        "URL=http://192.168.255.2:19001/nsecom/CheckOutServlet?name=f&address=g&city=ss&PostalCode=f&country=US&productid=Jeans009&upc=JeansUPC11119&size=2&color=blue&quantity=2&price=199.98&status=true&cartId=Cart20130325064443014&country=document.frmMain2.country.value",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364217312625.png",
        "Snapshot=webpage_1364217313140.png",
        INLINE_URLS,
            "URL=http://192.168.255.2:19001/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(5.725);

}
