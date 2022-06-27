#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow2()
{
    ns_smtp_send ("smtp_session",
	"SMTP_SERVER=127.0.0.1",
	"USER_ID=amit.sharma@cavisson.com",
	"PASSWORD=compass",
	"FROM_EMAIL=amit.sharma@cavisson.com",
	"TO_EMAILS=anjali.garg@cavisson.com",
	"CC_EMAILS=tanmay@cavisson.com,amit.sharma@cavisson.com",
	"BCC_EMAILS=sanjeev@cavisson.com,jitendra@cavisson.com",
	"SUBJECT=Event Invitation",
	"BODY=Hello you are invited to the annual event on 15 April 2022",
	"MESSAGE_COUNT=1"
    );
}
