/*-----------------------------------------------------------------------------
    Name: new
    Recorded By: netstorm
    Date of recording: 03/26/2013 10:39:10
    Flow details:
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void new()
{
    ns_web_url ("index",
        "URL=http://127.0.0.1/nsecom",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "REDIRECT=YES",
        "LOCATION=http://127.0.0.1/nsecom/",
        "PreSnapshot=webpage_1364274508871.png",
        "Snapshot=webpage_1364274509074.png",
        INLINE_URLS,
            "URL=http://127.0.0.1/nsecom/", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=http://127.0.0.1/nsecom/images/logo.png", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE
    );

    ns_page_think_time(3.603);

    ns_web_url ("HomePage_jsp",
        "URL=http://127.0.0.1/nsecom/jsp/HomePage.jsp",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1364274512724.png",
        "Snapshot=webpage_1364274513145.png",
        INLINE_URLS,
            "URL=http://127.0.0.1/nsecom/images/nsecomlogo.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/css/style.css", END_INLINE
    );

    ns_page_think_time(3.479);

    //Page Auto splitted for Button 'search' Clicked by User
  ns_web_url ("SearchProductServlet_7",
        "URL=http://127.0.0.1/nsecom/SearchProductServlet?keyword=jeans",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364274516718.png",
        "Snapshot=webpage_1364274517747.png",
        INLINE_URLS,
            "URL=http://127.0.0.1/nsecom/images/jeans1.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/images/jeans2.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/images/jeans3.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/images/jeans4.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/images/jeans5.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/images/jeans6.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/images/jeans7.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/images/jeans8.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/images/jeans9.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(8.378);

    //Page Auto splitted for Image Link '' Clicked by User
    ns_web_url ("ProductPageServlet_6",
        "URL=http://127.0.0.1/nsecom/ProductPageServlet?productid=Jeans002&upc=JeansUPC11112&prodImage=jeans2.png&prodPrice=29.99",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364274526187.png",
        "Snapshot=webpage_1364274526764.png",
        INLINE_URLS,
            "URL=http://127.0.0.1/nsecom/images/jeans2.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(2.137);

    //Page Auto splitted for Button 'Add to cart' Clicked by User
    ns_web_url ("AddToBagServlet_6",
        "URL=http://127.0.0.1/nsecom/AddToBagServlet?size=2&productid=Jeans002&price=29.99&upc=JeansUPC11112&prodImage=jeans2.png&quantity=1",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364274528621.png",
        "Snapshot=webpage_1364274529042.png",
        INLINE_URLS,
            "URL=http://127.0.0.1/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/images/jeans2.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(4.914);

    //Page Auto splitted for Button 'search' Clicked by User
    ns_web_url ("SearchProductServlet_8",
        "URL=http://127.0.0.1/nsecom/SearchProductServlet?keyword=jeans",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364274533737.png",
        "Snapshot=webpage_1364274534517.png",
        INLINE_URLS,
            "URL=http://127.0.0.1/nsecom/images/jeans1.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/images/jeans2.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/images/jeans3.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/images/jeans4.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/images/jeans5.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/images/jeans6.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/images/jeans7.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/images/jeans8.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/images/jeans9.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(1.638);

    //Page Auto splitted for Image Link '' Clicked by User
    ns_web_url ("ProductPageServlet_7",
        "URL=http://127.0.0.1/nsecom/ProductPageServlet?productid=Jeans006&upc=JeansUPC11116&prodImage=jeans6.png&prodPrice=69.99",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364274535516.png",
        "Snapshot=webpage_1364274536077.png",
        INLINE_URLS,
            "URL=http://127.0.0.1/nsecom/images/jeans6.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(2.138);

    //Page Auto splitted for Button 'Add to cart' Clicked by User
    ns_web_url ("AddToBagServlet_7",
        "URL=http://127.0.0.1/nsecom/AddToBagServlet?size=2&productid=Jeans006&price=69.99&upc=JeansUPC11116&prodImage=jeans6.png&quantity=2",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364274537934.png",
        "Snapshot=webpage_1364274538402.png",
        INLINE_URLS,
            "URL=http://127.0.0.1/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=CARTID;JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/images/jeans6.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=CARTID;JSESSIONID;", END_INLINE
    );

    ns_page_think_time(1.295);

    //Page Auto splitted for Button 'Continue Checkout' Clicked by User
    ns_web_url ("ShippingPage_jsp_3",
        "URL=http://127.0.0.1/nsecom/jsp/ShippingPage.jsp?productid=Jeans006&upc=JeansUPC11116&size=2&color=blue&quantity=2&price=139.98&status=true&cartId=Cart20130326103829392",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=CARTID;JSESSIONID;",
        "PreSnapshot=webpage_1364274539494.png",
        "Snapshot=webpage_1364274539884.png",
        INLINE_URLS,
            "URL=http://127.0.0.1/nsecom/jsp/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=CARTID;JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=CARTID;JSESSIONID;", END_INLINE
    );

    ns_page_think_time(4.087);

    //Page Auto splitted for Button 'Place Order' Clicked by User
    ns_web_url ("CheckOutServlet_3",
        "URL=http://127.0.0.1/nsecom/CheckOutServlet?name=f&address=g&city=j&PostalCode=d&country=US&productid=Jeans006&upc=JeansUPC11116&size=2&color=blue&quantity=2&price=139.98&status=true&cartId=Cart20130326103829392&country=document.frmMain2.country.value",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=CARTID;JSESSIONID;",
        "PreSnapshot=webpage_1364274544033.png",
        "Snapshot=webpage_1364274544361.png",
        INLINE_URLS,
            "URL=http://127.0.0.1/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=CARTID;JSESSIONID;", END_INLINE
    );

    ns_page_think_time(6.209);

}
