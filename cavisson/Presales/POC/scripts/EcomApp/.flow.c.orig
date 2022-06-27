/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: netstorm
    Date of recording: 04/15/2013 11:14:27
    Flow details:
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"
#include <sys/time.h>

long long current_timestamp();
 
 long long current_timestamp() {
     struct timeval te;
     gettimeofday(&te, NULL); // get current time
     long long milliseconds = te.tv_sec*1000LL + te.tv_usec/1000; // caculate milliseconds
     return milliseconds;
 }
 
 void updateJSESSIONID(){
     char buf[32];
     sprintf(buf, "JSESSIONID:%lld", current_timestamp());
     ns_save_string(buf, "jsessionID");
 }

void flow()
{
    ns_web_url ("home",
        "URL=http://45.43.30.194:8000/nsecom/home",
        "HEADER=Accept-Language:en-us,en;q=0.5",
	"HEADER=cavndfpinstance:F",
        "PreSnapshot=webpage_1366004646013.png",
        "Snapshot=webpage_1366004646125.png",
	"Cookie={jsessionID}",
        INLINE_URLS,
            "URL=http://45.43.30.194:8000/nsecom/images/nsecomlogo.png", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE
    );

    ns_page_think_time(4.407);

    ns_web_url ("searchProduct",
        "URL=http://45.43.30.194:8000/nsecom/searchProduct?keyword=jeans",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1366004650536.png",
        "Snapshot=webpage_1366004651183.png",
        INLINE_URLS,
            "URL=http://45.43.30.194:8000/nsecom/images/jeans1.png", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=http://45.43.30.194:8000/nsecom/images/jeans2.png", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=http://45.43.30.194:8000/nsecom/images/jeans3.png", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=http://45.43.30.194:8000/nsecom/images/jeans4.png", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=http://45.43.30.194:8000/nsecom/images/jeans5.png", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=http://45.43.30.194:8000/nsecom/images/jeans6.png", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=http://45.43.30.194:8000/nsecom/images/jeans7.png", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=http://45.43.30.194:8000/nsecom/images/jeans8.png", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE,
            "URL=http://45.43.30.194:8000/nsecom/images/jeans9.png", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE
    );

    ns_page_think_time(1.318);

    //Page Auto splitted for Image Link '' Clicked by User
    ns_web_url ("productPage",
        "URL=http://45.43.30.194:8000/nsecom/productPage?productid=Jeans003&upc=JeansUPC11113&prodImage=jeans3.png&prodPrice=39.99",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1366004652414.png",
        "Snapshot=webpage_1366004652812.png",
    );

    ns_page_think_time(2.15);

    //Page Auto splitted for Button 'Add to cart' Clicked by User
    ns_web_url ("addToBag",
        "URL=http://45.43.30.194:8000/nsecom/addToBag?size=2&productid=NA&price=39.99&upc=JeansUPC11113&prodImage=jeans3.png&quantity=1",
        "HEADER=Accept-Language:en-us,en;q=0.5",
	"HEADER=cavndfpinstance:f",
        "PreSnapshot=webpage_1366004654755.png",
        "Snapshot=webpage_1366004655050.png"
    );

    ns_page_think_time(0.857);

    //Page Auto splitted for Button 'Continue Checkout' Clicked by User
    ns_web_url ("shippingAddress",
        "URL=http://45.43.30.194:8000/nsecom/shippingAddress?productid=NA&upc=JeansUPC11113&size=2&color=blue&quantity=1&price=39.99&status=true&cartId=Cart20130415111414837",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=CARTID;",
        "PreSnapshot=webpage_1366004655748.png",
        "Snapshot=webpage_1366004656091.png",
        INLINE_URLS,
            "URL=http://45.43.30.194:8000/nsecom/images/logo.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=CARTID;", END_INLINE
    );

    ns_page_think_time(5.478);

    //Page Auto splitted for Button 'Place Order' Clicked by User
    ns_web_url ("checkOut",
        "URL=http://45.43.30.194:8000/nsecom/checkOut?name=d&address=g&city=d&PostalCode=d&country=US&productid=NA&upc=JeansUPC11113&size=2&color=blue&quantity=1&price=39.99&status=true&cartId=Cart20130415111414837",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=CARTID;",
        "PreSnapshot=webpage_1366004661520.png",
        "Snapshot=webpage_1366004661751.png"
    );

    ns_page_think_time(6.002);

}
