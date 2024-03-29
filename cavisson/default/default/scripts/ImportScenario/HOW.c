/*-----------------------------------------------------------------------------
    Name: flow
    Generated By: This is an auto generated script. You can, however, make a copy of this script using advanced script manager and enhance it.
    Date of generation: 02/25/2022 07:00:21
    Flow details:
    Build details: 4.8.0 (build# 45)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"



void HOW()
{
    ns_start_transaction("Login");
    ns_web_url ("Login",
        "URL={how_host}/login",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Accept:text/plain,application/json,text/html,application/javascript,application/xml",
        "HEADER=User-Agent:Mozilla/5.0 (Windows; U; Windows NT 6.0; de-DE) AppleWebKit/533.21.1 (KHTML, like Gecko) Version/5.0.5 Safari/533.21.1",
        "HEADER=Accept-Encoding: gzip, deflate, br, compress;q=0.9",
        BODY_BEGIN,
            "$CAVINCLUDE$=Login.json",
        BODY_END
    );
    ns_end_transaction("Login", NS_AUTO_STATUS);


    ns_page_think_time(0.0);

    ns_start_transaction("Get_Attachment_URL");
    ns_web_url ("Get_Attachment_URL",
        "URL={how_host}/attachment?ext=png",
        "METHOD=GET",
        "HEADER=Authorization:Bearer eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpYXQiOjE2NDMwOTE0MTEsIm5iZiI6MTY0MzA5MTQxMSwiZXhwIjoxNjQ1NjgzNDExLCJpc3MiOiJob3cuYzJzIiwiYXVkIjoiYXRobGV0ZSIsInVzZXJpZCI6ImNhdmlzc2lvbl9kZW1vIiwiY29ycGlkIjoid3c2OGI0NTQ4YmNmMTc0NTFhIn0.PkQRtSu3tN5hMF1qDlOisG894_qmWlrZGKtDAcDoboY",
        "HEADER=Accept:text/plain,application/json,text/html,application/javascript,application/xml",
        "HEADER=User-Agent:Mozilla/5.0 (Windows; U; Windows NT 6.0; de-DE) AppleWebKit/533.21.1 (KHTML, like Gecko) Version/5.0.5 Safari/533.21.1",
        "HEADER=Accept-Encoding: gzip, deflate, br, compress;q=0.9"
    );
    ns_end_transaction("Get_Attachment_URL", NS_AUTO_STATUS);


    ns_page_think_time(0.0);

    ns_start_transaction("Upload_Attachment");
    ns_web_url ("Upload_Attachment",
        "URL={attachment_url}",
        "METHOD=POST",
        "HEADER=Content-Type:multipart/form-data; boundary=----WebKitFormBoundary17f2fae3838",
        "HEADER=Accept:text/plain,application/json,text/html,application/javascript,application/xml",
        "HEADER=User-Agent:Mozilla/5.0 (Windows; U; Windows NT 6.0; de-DE) AppleWebKit/533.21.1 (KHTML, like Gecko) Version/5.0.5 Safari/533.21.1",
        "HEADER=Accept-Encoding: gzip, deflate, br, compress;q=0.9",
        MULTIPART_BODY_BEGIN,
            MULTIPART_BOUNDARY,
            "HEADER=Content-Disposition: form-data; name=\"key\""
            BODY_BEGIN,
            "{attachment_key}",
            BODY_END,
            MULTIPART_BOUNDARY,
            "HEADER=Content-Disposition: form-data; name=\"x-amz-algorithm\""
            BODY_BEGIN,
            "{attachment_x-amz-algorithm}",
            BODY_END,
            MULTIPART_BOUNDARY,
            "HEADER=Content-Disposition: form-data; name=\"x-amz-credential\""
            BODY_BEGIN,
            "{attachment_x-amz-credential}",
            BODY_END,
            MULTIPART_BOUNDARY,
            "HEADER=Content-Disposition: form-data; name=\"policy\""
            BODY_BEGIN,
            "{attachment_policy}",
            BODY_END,
            MULTIPART_BOUNDARY,
            "HEADER=Content-Disposition: form-data; name=\"x-amz-signature\""
            BODY_BEGIN,
            "{attachment_x-amz-signature}",
            BODY_END,
            MULTIPART_BOUNDARY,
            "HEADER=Content-Disposition: form-data; name=\"x-amz-date\""
            BODY_BEGIN,
            "{attachment_x-amz-date}",
            BODY_END,
            MULTIPART_BOUNDARY,
            "HEADER=Content-Disposition: form-data; name=\"x-amz-security-token\""
            BODY_BEGIN,
            "{attachment_x-amz-security-token}",
            BODY_END,
            MULTIPART_BOUNDARY,
            "HEADER=Content-Disposition: form-data; name=\"file\""
            BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=/Users/HZho17/Downloads/中奖截图.jpeg",
            BODY_END,
        MULTIPART_BODY_END,
    );
    ns_end_transaction("Upload_Attachment", NS_AUTO_STATUS);


    ns_page_think_time(0.0);

    ns_start_transaction("Create_Incident");
    ns_web_url ("Create_Incident",
        "URL={how_host}/incident",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Authorization:Bearer eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpYXQiOjE2NDMwOTE0MTEsIm5iZiI6MTY0MzA5MTQxMSwiZXhwIjoxNjQ1NjgzNDExLCJpc3MiOiJob3cuYzJzIiwiYXVkIjoiYXRobGV0ZSIsInVzZXJpZCI6ImNhdmlzc2lvbl9kZW1vIiwiY29ycGlkIjoid3c2OGI0NTQ4YmNmMTc0NTFhIn0.PkQRtSu3tN5hMF1qDlOisG894_qmWlrZGKtDAcDoboY",
        "HEADER=Accept:text/plain,application/json,text/html,application/javascript,application/xml",
        "HEADER=User-Agent:Mozilla/5.0 (Windows; U; Windows NT 6.0; de-DE) AppleWebKit/533.21.1 (KHTML, like Gecko) Version/5.0.5 Safari/533.21.1",
        "HEADER=Accept-Encoding: gzip, deflate, br, compress;q=0.9",
        BODY_BEGIN,
            "$CAVINCLUDE$=Create_Incident.json",
        BODY_END
    );
    ns_end_transaction("Create_Incident", NS_AUTO_STATUS);


    ns_page_think_time(0.0);

    ns_start_transaction("Get_Incident_s_");
    ns_web_url ("Get_Incident_s_",
        "URL={how_host}/incident",
        "METHOD=GET",
        "HEADER=Authorization:Bearer eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpYXQiOjE2NDMwOTE0MTEsIm5iZiI6MTY0MzA5MTQxMSwiZXhwIjoxNjQ1NjgzNDExLCJpc3MiOiJob3cuYzJzIiwiYXVkIjoiYXRobGV0ZSIsInVzZXJpZCI6ImNhdmlzc2lvbl9kZW1vIiwiY29ycGlkIjoid3c2OGI0NTQ4YmNmMTc0NTFhIn0.PkQRtSu3tN5hMF1qDlOisG894_qmWlrZGKtDAcDoboY",
        "HEADER=Accept:text/plain,application/json,text/html,application/javascript,application/xml",
        "HEADER=User-Agent:Mozilla/5.0 (Windows; U; Windows NT 6.0; de-DE) AppleWebKit/533.21.1 (KHTML, like Gecko) Version/5.0.5 Safari/533.21.1",
        "HEADER=Accept-Encoding: gzip, deflate, br, compress;q=0.9"
    );
    ns_end_transaction("Get_Incident_s_", NS_AUTO_STATUS);


    ns_page_think_time(0.0);

    ns_start_transaction("Get_Asset");
    ns_web_url ("Get_Asset",
        "URL={how_host}/asset/wcw/assets.json",
        "METHOD=GET",
        "HEADER=Authorization:Bearer eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpYXQiOjE2NDMwOTE0MTEsIm5iZiI6MTY0MzA5MTQxMSwiZXhwIjoxNjQ1NjgzNDExLCJpc3MiOiJob3cuYzJzIiwiYXVkIjoiYXRobGV0ZSIsInVzZXJpZCI6ImNhdmlzc2lvbl9kZW1vIiwiY29ycGlkIjoid3c2OGI0NTQ4YmNmMTc0NTFhIn0.PkQRtSu3tN5hMF1qDlOisG894_qmWlrZGKtDAcDoboY",
        "HEADER=Accept:text/plain,application/json,text/html,application/javascript,application/xml",
        "HEADER=User-Agent:Mozilla/5.0 (Windows; U; Windows NT 6.0; de-DE) AppleWebKit/533.21.1 (KHTML, like Gecko) Version/5.0.5 Safari/533.21.1",
        "HEADER=Accept-Encoding: gzip, deflate, br, compress;q=0.9"
    );
    ns_end_transaction("Get_Asset", NS_AUTO_STATUS);


    ns_page_think_time(0.0);

    ns_start_transaction("Get_Config");
    ns_web_url ("Get_Config",
        "URL={how_host}/asset/wcw/config.json",
        "METHOD=GET",
        "HEADER=Authorization:Bearer eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpYXQiOjE2NDMwOTE0MTEsIm5iZiI6MTY0MzA5MTQxMSwiZXhwIjoxNjQ1NjgzNDExLCJpc3MiOiJob3cuYzJzIiwiYXVkIjoiYXRobGV0ZSIsInVzZXJpZCI6ImNhdmlzc2lvbl9kZW1vIiwiY29ycGlkIjoid3c2OGI0NTQ4YmNmMTc0NTFhIn0.PkQRtSu3tN5hMF1qDlOisG894_qmWlrZGKtDAcDoboY",
        "HEADER=Accept:text/plain,application/json,text/html,application/javascript,application/xml",
        "HEADER=User-Agent:Mozilla/5.0 (Windows; U; Windows NT 6.0; de-DE) AppleWebKit/533.21.1 (KHTML, like Gecko) Version/5.0.5 Safari/533.21.1",
        "HEADER=Accept-Encoding: gzip, deflate, br, compress;q=0.9"
    );
    ns_end_transaction("Get_Config", NS_AUTO_STATUS);


    ns_page_think_time(0.0);

}
