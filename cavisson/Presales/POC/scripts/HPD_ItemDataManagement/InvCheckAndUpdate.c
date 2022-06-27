/*-----------------------------------------------------------------------------
    Name:InvCheckAndUpdate
    Recorded By: anjali
    Date of recording: 04/28/2017 01:24:16
    Flow details:
    Build details: 4.1.6 (build# 56)
    Modification History:
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"
void InvCheckAndUpdate()
{
    ns_start_transaction("CheckItemAvailability_POST");
    ns_web_url ("CheckItemAvailabilityApi",
        "URL=http://127.0.0.1/v1/sku/getitemavailability",
        "METHOD=POST",
        "HEADER=content-type:application/json;charset=utf-8",
        //"{"skuAvailability": [{"skuId": "28626380018","inventoryCheckRequired": "true","countryCode": "US","deliveryOptions": "standard"},{"skuId": "29046730000","inventoryCheckRequired": "true","countryCode": "US","deliveryOptions": "standard"},{"skuId": "28286300000","inventoryCheckRequired": "true","countryCode": "US","deliveryOptions": "standard"},{"skuId": "45555520000","inventoryCheckRequired": "true","countryCode": "US","deliveryOptions": "standard"},{"skuId": "78015950018","inventoryCheckRequired": "true","countryCode": "US","deliveryOptions": "standard"}]}",
        BODY_BEGIN,    
            "{"skuAvailability": [{$CAVREPEAT_BLOCK_START,sep(,),Value(SkuCount)}{"skuId": "{SKUIdFP}","inventoryCheckRequired": "true","countryCode": "US","deliveryOptions": "standard"}{$CAVREPEAT_BLOCK_END}]}",
        BODY_END,
    );

    ns_end_transaction("CheckItemAvailability_POST",NS_AUTO_STATUS);
    ns_page_think_time(0);

    
 //******************* Update Quantity to 99 of Available Low SKUs********************************************//
       
    ns_start_transaction("UpdateSkuStatus_POST");
    ns_web_url ("UpdateSkuStatusApi",
        "URL=http://127.0.0.1/v1/sku/updateskuinventorystatus",
        "METHOD=POST",
        "HEADER=content-type:application/json;charset=utf-8",
        //"{"skuDetails": [{"skuId": "28626380018","quantity": "99"},{"skuId": "29046730000","quantity": "99"},{"skuId": "28286300000","quantity": "99"},{"skuId": "45555520000","quantity": "99"},{"skuId": "78015950018","quantity": "99"}]}",
        BODY_BEGIN,    
            "{"skuDetails": [{$CAVREPEAT_BLOCK_START,sep(,),Count(AvlLowSkuIdSP)}{"skuId": "{AvlLowSkuIdSP}","quantity": "99"}{$CAVREPEAT_BLOCK_END}]}",
        BODY_END,
   );
    ns_end_transaction("UpdateSkuStatus_POST",NS_AUTO_STATUS);
    ns_page_think_time(0);

}
