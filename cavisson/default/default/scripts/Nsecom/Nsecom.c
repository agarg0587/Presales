/*-----------------------------------------------------------------------------
    Name: Nsecom
    Recorded By: cavisson
    Date of recording: 01/17/2022 02:00:49
    Flow details:
    Build details: 4.6.1 (build# 91)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void Nsecom()
{
    ns_start_transaction("index");
    ns_web_url ("index",
        "URL=https://10.10.30.128/nsecom/",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        INLINE_URLS,
            "URL=http://certificates.godaddy.com/repository/gdig2.crt", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://10.10.30.128/nsecom/images/logo.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("index", NS_AUTO_STATUS);
    ns_page_think_time(3.157);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("home");
    ns_web_url ("home",
        "URL=https://10.10.30.128/nsecom/home",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        INLINE_URLS,
            "URL=https://10.10.30.128/nsecom/images/nsecomlogo.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("home", NS_AUTO_STATUS);
    ns_page_think_time(7.698);

    //Page Auto split for Button 'search' Clicked by User
    ns_start_transaction("searchProduct");
    ns_web_url ("searchProduct",
        "URL=https://10.10.30.128/nsecom/searchProduct?keyword=shirts",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        INLINE_URLS,
            "URL=https://10.10.30.128/nsecom/images/shirt1.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://10.10.30.128/nsecom/images/shirt2.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://10.10.30.128/nsecom/images/shirt3.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://10.10.30.128/nsecom/images/shirt4.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://10.10.30.128/nsecom/images/shirt5.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://10.10.30.128/nsecom/images/shirt6.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://10.10.30.128/nsecom/images/shirt7.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("searchProduct", NS_AUTO_STATUS);
    ns_page_think_time(1.64);

    //Page Auto split for Image Link '' Clicked by User
    ns_start_transaction("productPage");
    ns_web_url ("productPage",
        "URL=https://10.10.30.128/nsecom/productPage?productid=Shirt002&upc=ShirtUPC11112&prodImage=shirt2.png&prodPrice=29.99",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8"
    );

    ns_end_transaction("productPage", NS_AUTO_STATUS);
    ns_page_think_time(5.064);

    //Page Auto split for Button 'Add to cart' Clicked by User
    ns_start_transaction("addToBag");
    ns_web_url ("addToBag",
        "URL=https://10.10.30.128/nsecom/addToBag?size=2&productid=NA&price=29.99&upc=ShirtUPC11112&prodImage=shirt2.png&quantity=2",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8"
    );

    ns_end_transaction("addToBag", NS_AUTO_STATUS);
    ns_page_think_time(1.956);

    //Page Auto split for Button 'Continue Checkout' Clicked by User
    ns_start_transaction("shippingAddress");
    ns_web_url ("shippingAddress",
        "URL=https://10.10.30.128/nsecom/shippingAddress?productid=NA&upc=ShirtUPC11112&size=2&color=blue&quantity=2&price=59.98&status=true&cartId=Cart20220117023030975",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "COOKIE=CARTID",
        INLINE_URLS,
            "URL=https://10.10.30.128/nsecom/images/logo.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", "COOKIE=CARTID", END_INLINE
    );

    ns_end_transaction("shippingAddress", NS_AUTO_STATUS);
    ns_page_think_time(18.218);

    //Page Auto split for Button 'Place Order' Clicked by User
    ns_start_transaction("checkOut");
    ns_web_url ("checkOut",
        "URL=https://10.10.30.128/nsecom/checkOut?name=abc&address=123&city=delhi&PostalCode=201001&country=US&productid=NA&upc=ShirtUPC11112&size=2&color=blue&quantity=2&price=59.98&status=true&cartId=Cart20220117023030975",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "COOKIE=CARTID",
        INLINE_URLS,
            "URL=https://10.10.30.128/nsecom/images/nsecomlogo.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", "COOKIE=CARTID", END_INLINE
    );

    ns_end_transaction("checkOut", NS_AUTO_STATUS);
    ns_page_think_time(9.806);

}
