/*-----------------------------------------------------------------------------
    Name: flow
    Generated By: netstorm
    Date of generation: 05/22/2012 11:54:50
    Flow details:
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"


void flow()
{
  ns_smtp_send("send_email_invite",
  "SMTP_SERVER=64.151.228.23:587",
  "USER_ID=admin.backup@cavisson.com",
  "PASSWORD=Cavisson!",
  "FROM_EMAIL=Admin <admin.backup@cavisson.com>",
  "TO_EMAILS={EMAIL}",
  "SUBJECT={Subject}",
  "BODY={Body}",
  "ATTACHMENT=/tmp/progress_logs.tar",
  "MESSAGE_COUNT=1");
  ns_page_think_time(0);

}


