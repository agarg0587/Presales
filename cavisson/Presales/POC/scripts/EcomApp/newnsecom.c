/*-----------------------------------------------------------------------------
    Name: newnsecom
    Recorded By: netstorm
    Date of recording: 05/06/2013 06:09:14
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
    // sprintf(buf, "ASP.NET_SessionId:%lld", current_timestamp());
      sprintf(buf, "JSESSIONID:%lld", current_timestamp());
     ns_save_string(buf, "jsessionID");
 }


void newnsecom()
{
   updateJSESSIONID();
   ns_web_add_auto_header("Cookie",ns_eval_string("{jsessionID}"), 0);
   ns_start_transaction("NsecomHome");
   ns_web_url ("home_10",
        "URL=http://10.10.30.48:17000/nsecom/home",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1367843893014.png",
        "Snapshot=webpage_1367843893107.png",
        INLINE_URLS,
            "URL=http://10.10.30.48:17000/nsecom/images/nsecomlogo.png", "HEADER=Accept-Language:en-us,en;q=0.5", END_INLINE
    );
   ns_end_transaction ("NsecomHome",NS_AUTO_STATUS);
   ns_page_think_time(10);

   ns_start_transaction("NsecomSearchProduct");
   ns_web_url ("searchProduct_5",
        "URL=http://10.10.30.48:17000/nsecom/searchProduct?keyword=jeans",
       // "HEADER=Accept-Language:en-us,en;q=0.5",
        "HEADER=Accept-Language:en-us,en;q0.5",
        "PreSnapshot=webpage_1367843904651.png",
        "Snapshot=webpage_1367843904823.png",
    );
   ns_end_transaction ("NsecomSearchProduct",NS_AUTO_STATUS);
   ns_page_think_time(5);

   ns_start_transaction("NsecomProductPage");
   ns_web_url ("productPage_7",
        "URL=http://10.10.30.48:17000/nsecom/productPage?productid=Jeans001&upc=JeansUPC11111&prodImage=jeans1.png&prodPrice=19.99",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1367843906695.png",
        "Snapshot=webpage_1367843906976.png",
    );
   ns_end_transaction ("NsecomProductPage",NS_AUTO_STATUS);
   ns_page_think_time(10);

   ns_start_transaction("NsecomAddToBag");
   ns_web_url ("addToBag_7",
        "URL=http://10.10.30.48:17000/nsecom/addToBag?size=2&productid=NA&price=19.99&upc=JeansUPC11111&prodImage=jeans1.png&quantity=5",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1367843915680.png",
        "Snapshot=webpage_1367843916008.png"
    );
   ns_end_transaction ("NsecomAddToBag",NS_AUTO_STATUS);
   ns_page_think_time(5);

   ns_start_transaction("NsecomShippingAddress");
   ns_web_url ("shippingAddress_4",
        "URL=http://10.10.30.48:17000/nsecom/shippingAddress?productid=NA&upc=JeansUPC11111&size=2&color=blue&quantity=5&price=99.95&status=true&cartId=Cart20130506060835686",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1367843917552.png",
        "Snapshot=webpage_1367843917880.png",
        INLINE_URLS,
            "URL=http://10.10.30.48:17000/nsecom/images/logo.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=CARTID;", END_INLINE
    );
   ns_end_transaction ("NsecomShippingAddress",NS_AUTO_STATUS);  
   ns_page_think_time(10);

    //Page Auto splitted for Button 'Place Order' Clicked by User
    ns_start_transaction("NsecomCheckout");
    ns_web_url ("checkOut_4",
        "URL=http://10.10.30.48:17000/nsecom/checkOut?name=d&address=f&city=g&PostalCode=v&country=US&productid=NA&upc=JeansUPC11111&size=2&color=blue&quantity=5&price=99.95&status=true&cartId=Cart20130506060835686",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1367843946818.png",
        "Snapshot=webpage_1367843947083.png"
    );
    ns_end_transaction ("NsecomCheckout",NS_AUTO_STATUS);
    ns_page_think_time(5);
	
}
