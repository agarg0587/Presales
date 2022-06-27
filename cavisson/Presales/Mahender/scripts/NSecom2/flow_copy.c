/*-----------------------------------------------------------------------------
    Name: flow_copy
    Recorded By: Mahender
    Date of recording: 03/14/2022 06:45:14
    Flow details:
    Build details: 4.8.0 (build# 51)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow_copy()
{
    ns_start_transaction("home");
    ns_web_url ("home_1",
        "URL=https://184.105.48.12/nsecom/home",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://184.105.48.12/nsecom/images/nsecomlogo.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("home", NS_AUTO_STATUS);
    ns_page_think_time(5.639);

    //Page Auto split for Button 'search' Clicked by User
    ns_start_transaction("searchProduct");
    ns_web_url ("searchProduct_1",
        "URL=https://184.105.48.12/nsecom/searchProduct?keyword=shirts",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://184.105.48.12/nsecom/images/shirt1.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://184.105.48.12/nsecom/images/shirt2.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://184.105.48.12/nsecom/images/shirt3.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://184.105.48.12/nsecom/images/shirt4.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://184.105.48.12/nsecom/images/shirt5.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://184.105.48.12/nsecom/images/shirt6.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://184.105.48.12/nsecom/images/shirt7.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("searchProduct", NS_AUTO_STATUS);
    ns_page_think_time(2.569);

    //Page Auto split for Image Link '' Clicked by User
    ns_start_transaction("productPage");
    ns_web_url ("productPage_1",
        "URL=https://184.105.48.12/nsecom/productPage?productid=Shirt001&upc=ShirtUPC11111&prodImage=shirt1.png&prodPrice=19.99",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("productPage", NS_AUTO_STATUS);
    ns_page_think_time(4.546);

    //Page Auto split for Button 'Add to cart' Clicked by User
    ns_start_transaction("addToBag");
    ns_web_url ("addToBag_1",
        "URL=https://184.105.48.12/nsecom/addToBag?size=2&productid=NA&price=19.99&upc=ShirtUPC11111&prodImage=shirt1.png&quantity=1",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("addToBag", NS_AUTO_STATUS);
    ns_page_think_time(2.426);

    //Page Auto split for Button 'Continue Checkout' Clicked by User
    ns_start_transaction("shippingAddress");
    ns_web_url ("shippingAddress_1",
        "URL=https://184.105.48.12/nsecom/shippingAddress?productid=NA&upc=ShirtUPC11111&size=2&color=blue&quantity=1&price=19.99&status=true&cartId=Cart20220314011529810",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=CARTID",
        INLINE_URLS,
            "URL=https://184.105.48.12/nsecom/images/logo.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=CARTID", END_INLINE
    );

    ns_end_transaction("shippingAddress", NS_AUTO_STATUS);
    ns_page_think_time(20.67);

    //Page Auto split for Button 'Place Order' Clicked by User
    ns_start_transaction("checkOut");
    ns_web_url ("checkOut_1",
        "URL=https://184.105.48.12/nsecom/checkOut?name=mahender&address=hyderabad&city=kphb&PostalCode=500072&country=India&productid=NA&upc=ShirtUPC11111&size=2&color=blue&quantity=1&price=19.99&status=true&cartId=Cart20220314011529810",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=CARTID",
        INLINE_URLS,
            "URL=https://184.105.48.12/nsecom/images/nsecomlogo.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=CARTID", END_INLINE
    );

    ns_end_transaction("checkOut", NS_AUTO_STATUS);
    ns_page_think_time(2.597);

}
