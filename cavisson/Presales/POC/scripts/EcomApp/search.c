/*-----------------------------------------------------------------------------
    Name: search
    Recorded By: netstorm
    Date of recording: 04/03/2013 05:13:06
    Flow details:
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void search()
{
    ns_web_url ("HomePage_jsp_2",
        "URL=http://127.0.0.1/nsecom/jsp/HomePage.jsp",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "PreSnapshot=webpage_1364989351799.png",
        "Snapshot=webpage_1364989352127.png",
        INLINE_URLS,
            "URL=http://127.0.0.1/nsecom/images/nsecomlogo.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/css/style.css", END_INLINE
    );

    ns_page_think_time(4.696);

    ns_web_url ("SearchProductServlet_9",
        "URL=http://127.0.0.1/nsecom/SearchProductServlet?keyword=pants",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364989356651.png",
        "Snapshot=webpage_1364989357509.png",
        INLINE_URLS,
            "URL=http://127.0.0.1/nsecom/images/pants1.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/images/pants2.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/images/pants3.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/images/pants4.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/images/pants5.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/images/pants6.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/images/pants7.png", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE,
            "URL=http://127.0.0.1/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(1.825);

    ns_web_url ("ProductPageServlet_8",
        "URL=http://127.0.0.1/nsecom/ProductPageServlet?productid=Pant005&upc=PantUPC11115&prodImage=pants5.png&prodPrice=59.99",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364989359053.png",
        "Snapshot=webpage_1364989359724.png",
        INLINE_URLS,
            "URL=http://127.0.0.1/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=JSESSIONID;", END_INLINE
    );

    ns_page_think_time(2.792);

    ns_web_url ("AddToBagServlet_8",
        "URL=http://127.0.0.1/nsecom/AddToBagServlet?size=2&productid=Pant005&price=59.99&upc=PantUPC11115&prodImage=pants5.png&quantity=1",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=JSESSIONID;",
        "PreSnapshot=webpage_1364989362017.png",
        "Snapshot=webpage_1364989362251.png",
        INLINE_URLS,
            "URL=http://127.0.0.1/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=CARTID;JSESSIONID;", END_INLINE
    );

    ns_page_think_time(12.792);

    ns_web_url ("ShippingPage_jsp_4",
        "URL=http://127.0.0.1/nsecom/jsp/ShippingPage.jsp?productid=Pant005&upc=PantUPC11115&size=2&color=blue&quantity=1&price=59.99&status=true&cartId=Cart20130403051113383",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=CARTID;JSESSIONID;",
        "PreSnapshot=webpage_1364989374949.png",
        "Snapshot=webpage_1364989375183.png",
        INLINE_URLS,
            "URL=http://127.0.0.1/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=CARTID;JSESSIONID;", END_INLINE
    );

    ns_page_think_time(4.368);

    ns_web_url ("CheckOutServlet_4",
        "URL=http://127.0.0.1/nsecom/CheckOutServlet?name=d&address=s&city=s&PostalCode=x&country=US&cartId=Cart20130403051113383&country=document.frmMain2.country.value",
        "HEADER=Accept-Language:en-us,en;q=0.5",
        "COOKIE=CARTID;JSESSIONID;",
        "PreSnapshot=webpage_1364989379442.png",
        "Snapshot=webpage_1364989379645.png",
        INLINE_URLS,
            "URL=http://127.0.0.1/nsecom/js/validate.js", "HEADER=Accept-Language:en-us,en;q=0.5", "COOKIE=CARTID;JSESSIONID;", END_INLINE
    );

    ns_page_think_time(6.536);

}
