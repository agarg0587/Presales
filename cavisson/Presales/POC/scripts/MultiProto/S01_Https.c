/*-----------------------------------------------------------------------------
    Name:S01_Https
    Recorded By: netstorm
    Date of recording: 10/03/2016 02:33:05
    Flow details:
    Build details: 4.1.6 (build# 20)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void S01_Https()
{
    ns_start_transaction("Trx01_Home");
    ns_web_url ("index_html",
        "URL=https://nspoc3.cav-test.com:9010/file_set/dir00000/class100K.html",
        "HEADER=Accept-Language:en-us",
        "HEADER=Upgrade-Insecure-Requests:1",
        "PreSnapshot=webpage_1475485357440.png",
        "Snapshot=webpage_1475485360197.png",
        INLINE_URLS,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE
    );
    ns_end_transaction("Trx01_Home", NS_AUTO_STATUS);
    ns_page_think_time(10.422);

    ns_start_transaction("Trx02_Login");
    ns_web_url ("login",
        "URL=https://nspoc3.cav-test.com:9010/file_set/dir00000/class200K.html",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "COOKIE=akaau",
        "PreSnapshot=webpage_1475485370449.png",
        "Snapshot=webpage_1475485370623.png",
        INLINE_URLS,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE
    );
    ns_end_transaction("Trx02_Login", NS_AUTO_STATUS);
    ns_page_think_time(1.739);

    ns_start_transaction("Trx03_StartReservation");
    ns_web_url ("reservation",
        "URL=https://nspoc3.cav-test.com:9010/file_set/dir00000/class100K.html",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "COOKIE=akaau",
        "PreSnapshot=webpage_1475485372350.png",
        "Snapshot=webpage_1475485372510.png",
        INLINE_URLS,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/images/continue.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE
    );
    ns_end_transaction("Trx03_StartReservation", NS_AUTO_STATUS);
    ns_page_think_time(1.279);

    ns_start_transaction("Trx04_FindFlight");
    ns_web_url ("findflight",
        "URL=https://nspoc3.cav-test.com:9010/file_set/dir00000/class100K.html",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "COOKIE=akaau",
        "PreSnapshot=webpage_1475485373785.png",
        "Snapshot=webpage_1475485373949.png",
        INLINE_URLS,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/images/startover.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/images/continue.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE
    );
    ns_end_transaction("Trx04_FindFlight", NS_AUTO_STATUS);
    ns_page_think_time(0.944);
    
    ns_start_transaction("Trx05_SelectFlight");
    ns_web_url ("findflight_2",
        "URL=https://nspoc3.cav-test.com:9010/file_set/dir00000/class100K.html",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "COOKIE=akaau",
        "PreSnapshot=webpage_1475485374901.png",
        "Snapshot=webpage_1475485375081.png",
        INLINE_URLS,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/images/startover.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE
    );
    ns_end_transaction("Trx05_SelectFlight", NS_AUTO_STATUS);
    ns_page_think_time(3.159);
    
    ns_start_transaction("Trx06_PurchaseFlight");
    ns_web_url ("findflight_3",
        "URL=https://nspoc3.cav-test.com:9010/file_set/dir00000/class300K.html",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "COOKIE=akaau",
        "PreSnapshot=webpage_1475485378216.png",
        "Snapshot=webpage_1475485378580.png",
        INLINE_URLS,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/images/bookanother.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE
    );
    ns_end_transaction("Trx06_PurchaseFlight", NS_AUTO_STATUS);
    ns_page_think_time(4.048);

    ns_start_transaction("Trx07_LogOut");
    ns_web_url ("welcome",
        "URL=https://nspoc3.cav-test.com:9010/file_set/dir00000/class100K.html",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "COOKIE=akaau",
        "PreSnapshot=webpage_1475485382572.png",
        "Snapshot=webpage_1475485382692.png",
        INLINE_URLS,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE
    );
    ns_end_transaction("Trx07_LogOut", NS_AUTO_STATUS);
    ns_page_think_time(2.401);

    

}
