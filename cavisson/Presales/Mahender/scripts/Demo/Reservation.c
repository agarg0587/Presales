/*-----------------------------------------------------------------------------
    Name:Reservation
    Splitted By:cavisson
    Date of splitting:2/25 8:25:4
    Flow details:
    Build details: 4.8.0 (build# 45)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void Reservation(){

	 ns_start_transaction("login");
    ns_web_url ("login",
        "URL=https://nspoc3.cav-test.com:9010/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=Anjali&password=cavnoida&login.x=63&login.y=12&JSFormSubmit=off",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/banner_animated.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/sun_swede.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/flights.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/home.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/signoff.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/images/banner_merctur.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/vep/images/velocigen.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/cgi-bin/reservation", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-User:?1", "HEADER=Sec-Fetch-Dest:document", "HEADER=Accept-Language:en-US,en;q=0.9",             END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/banner_animated.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/sun_swede.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/flights.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/home.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/signoff.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/images/continue.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/vep/images/velocigen.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("login", NS_AUTO_STATUS);
    ns_page_think_time(4.147);
  ns_start_transaction("findflight");
    ns_web_url ("findflight",
        "URL=https://nspoc3.cav-test.com:9010/cgi-bin/findflight?depart=Acapulco&departDate=02-26-2022&arrive=Acapulco&returnDate=02-27-2022&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=96&findFlights.y=13",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/banner_animated.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/sun_swede.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/flights.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/home.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/Merc10-dev/images/signoff.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/images/splash_Searchresults.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/images/continue.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/images/startover.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nspoc3.cav-test.com:9010/tours/vep/images/velocigen.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("findflight", NS_AUTO_STATUS);
    ns_page_think_time(13.349);
}
