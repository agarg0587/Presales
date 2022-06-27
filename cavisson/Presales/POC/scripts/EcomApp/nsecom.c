/*-----------------------------------------------------------------------------
    Name: nsecom
    Recorded By: netstorm
    Date of recording: 05/02/2013 04:05:36
    Flow details:
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void nsecom()
{
    ns_web_url ("home_2",
        "URL=http://192.168.1.92:19001/nsecom/home",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1367490914753.png",
        "Snapshot=webpage_1367490915127.png",
        INLINE_URLS,
            "URL=http://192.168.1.92:19001/nsecom/images/nsecomlogo.png", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE
    );

    ns_page_think_time(5.07);

    //Page Auto splitted for Button 'search' Clicked by User
    ns_web_url ("searchProduct_2",
        "URL=http://192.168.1.92:19001/nsecom/{url}?keyword=jeans",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1367490920166.png",
        "Snapshot=webpage_1367490921227.png",
        INLINE_URLS,
            "URL=http://192.168.1.92:19001/nsecom/images/jeans1.png", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=http://192.168.1.92:19001/nsecom/images/jeans2.png", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=http://192.168.1.92:19001/nsecom/images/jeans3.png", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=http://192.168.1.92:19001/nsecom/images/jeans4.png", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=http://192.168.1.92:19001/nsecom/images/jeans5.png", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=http://192.168.1.92:19001/nsecom/images/jeans6.png", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=http://192.168.1.92:19001/nsecom/images/jeans7.png", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=http://192.168.1.92:19001/nsecom/images/jeans8.png", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=http://192.168.1.92:19001/nsecom/images/jeans9.png", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE
    );

    ns_page_think_time(1.95);

    //Page Auto splitted for Image Link '' Clicked by User
    ns_web_url ("productPage_2",
        "URL=http://192.168.1.92:19001/nsecom/productPage?productid=Jeans006&upc=JeansUPC11116&prodImage=jeans6.png&prodPrice=69.99",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1367490922802.png",
        "Snapshot=webpage_1367490923832.png"
    );

    ns_page_think_time(2.231);

    //Page Auto splitted for Button 'Add to cart' Clicked by User
    ns_web_url ("addToBag_2",
        "URL=http://192.168.1.92:19001/nsecom/addToBag?size=2&productid=NA&price=69.99&upc=JeansUPC11116&prodImage=jeans6.png&quantity=1",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1367490925220.png",
        "Snapshot=webpage_1367490926203.png"
    );

    ns_page_think_time(1.529);

    //Page Auto splitted for Button 'Continue Checkout' Clicked by User
    ns_web_url ("shippingAddress_2",
        "URL=http://192.168.1.92:19001/nsecom/shippingAddress?productid=NA&upc=JeansUPC11116&size=2&color=blue&quantity=1&price=69.99&status=true&cartId=Cart20130502040523465",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=CARTID;",
        "PreSnapshot=webpage_1367490927139.png",
        "Snapshot=webpage_1367490927857.png",
        INLINE_URLS,
            "URL=http://192.168.1.92:19001/nsecom/images/logo.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=CARTID;", END_INLINE
    );

    ns_page_think_time(3.603);

    //Page Auto splitted for Button 'Place Order' Clicked by User
    ns_web_url ("checkOut_2",
        "URL=http://192.168.1.92:19001/nsecom/checkOut?name=f&address=s&city=f&PostalCode=s&country=US&productid=NA&upc=JeansUPC11116&size=2&color=blue&quantity=1&price=69.99&status=true&cartId=Cart20130502040523465",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=CARTID;",
        "PreSnapshot=webpage_1367490931398.png",
        "Snapshot=webpage_1367490931726.png"
    );

    ns_page_think_time(4.571);

}
