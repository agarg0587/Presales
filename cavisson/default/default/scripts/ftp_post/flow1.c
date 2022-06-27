#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow1()
{
    ns_ftp_get("direct",
//	//"FTP_SERVER=test.rebex.net",
	"FTP_SERVER=216.66.23.198:21",
        "USER_ID=cavisson",
        "PASSWORD=cavisson",
      "PASSIVE=Y",
//  //      "TYPE=A",
        "FILE=ftp_tiny.txt"
        );
        //"FILE=class500K.html"
       // %name

        ns_ftp_put("direct1",
//	//"FTP_SERVER=test.rebex.net",
        "FTP_SERVER=216.66.23.198:21",
        "USER_ID=cavisson",
        "PASSWORD=cavisson",
        "PASSIVE=Y",
        "TYPE=I",
//  //      "TYPE=A",
        //"FILE=/home/cavisson/UST_Sandbox/hpd/users/default/cavisson/ftp_tiny.txt"
         "FILE=/home/cavisson/work/scripts/default/default/ftp_post/xyz.txt"
         );

   /*
    ns_ftp_get("usingproxy",
       "FTP_SERVER=199.168.148.131",
       "USER_ID=demo@test.rebex.net",
       "PASSWORD=password",
       "PASSIVE=Y",
//       "TYPE=A",
       "FILE=readme.txt"
);

 /*    ns_ftp_put("page2",
           "FTP_SERVER=199.168.148.131",
           "USER_ID={uname}",
          "PASSWORD={pass}",
         "PASSIVE=%type",
        "TYPE=%rr_type",
       "FILE=/home/cavisson/work/scripts/Smoke/Smoke/Smoke_Ftp_Bin/xyz.bin"
	       );
*/
}
