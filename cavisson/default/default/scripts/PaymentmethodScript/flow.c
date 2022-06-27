/*-----------------------------------------------------------------------------
    Name: flow
    Generated By: cavisson
    Date of generation: 06/27/2022 07:15:11
    Flow details:
    Build details: 4.8.0 (build# 115)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow()
{
    ns_start_transaction("Paymentmethod");
    ns_web_url ("Paymentmethod",
        "URL=https://66.220.31.137:8443/api/v2/merchants/payment",
        "METHOD=POST",
        BODY_BEGIN,
            "{
    "amount": {
        "amount": 10.50,
        "currency": "USD"
    },
    "autoCapture": true,
    "paymentMethodId": 1,
    "PayPalWallet": {
        "Balance": 956.23,
        "WalletID": "UX876QAC"
    },
  "CreditCardInfo": {
  "CreditCardAuthorized": "true",
    "expiry": "Feb 2032"
  },
    "transactionChannel": "Web Online"
}",
        BODY_END
    );

    ns_end_transaction("Paymentmethod", NS_AUTO_STATUS);

    ns_page_think_time(0);

}
