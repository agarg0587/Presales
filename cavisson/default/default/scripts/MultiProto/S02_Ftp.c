#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void S02_Ftp()
{
	
	ns_start_transaction("Ftp_Get");
     ns_ftp_get("Get",
	   "FTP_SERVER=nspoc3.cav-test.com:21",
        "USER_ID={Username}",
        "PASSWORD={Password}",
        "PASSIVE=Y",
        "FILE=ftp_tiny.txt"
        
    );
    ns_end_transaction("Ftp_Get", NS_AUTO_STATUS);
    ns_page_think_time(10.422);

     ns_start_transaction("Ftp_Put");
     ns_ftp_put("Put",
        "FTP_SERVER=nspoc3.cav-test.com:21",
        "USER_ID={Username}",
        "PASSWORD={Password}",
        "PASSIVE=Y",
        "TYPE=I",
         "FILE=/home/cavisson/work/workspace/Anjali/default/cavisson/default/default/scripts/ftp_post/ftp_put.txt"
    );
    ns_end_transaction("Ftp_Put", NS_AUTO_STATUS);
    ns_page_think_time(10.422);
}
