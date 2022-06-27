#include <stdio.h>
#include <stdlib.h>
#include <sys/times.h>
#include <string.h>
#include "../../include/ns_string.h"
#include "script.h"
#include "set_vars.c"

void user_test_init() {
	printf ("starting user test init\n");
    	create_device_entries();
	printf ("Done create device \n");
	set_test_cases();
	printf ("Done user test init\n");
}

int init_script() {
	set_init_vars();
	return class1_0_html;
}

int pre_page_class1_0_html(void) {
int tcase;
int num, unum, dnum;
short acode, last_acode;
unsigned long last_tstamp;
char *ipa;
int CaseLoop;

	CaseLoop = ns_get_int_val("CaseLoop");
	//printf ("CaseLoop = %d\n", CaseLoop);
	if (CaseLoop) {
	    num = ns_get_int_val("Bnum");
	} else {
	    num = rand() % num_bind_entries;
	    ns_set_int_val ("Bnum", num);
	}
	unum = bindTable[num].unum;
	dnum = bindTable[num].dnum;
	acode = userTable[unum].acode;
	last_acode = userTable[unum].last_acode;
	last_tstamp = userTable[unum].login_time;

	tcase = ns_get_int_val("TestCase");
	//printf ("TestCase = %d CaseLoop=%d pid=%d\n", tcase, CaseLoop, getpid());
	switch (tcase) {
	case TEST_OLDUSR_OWNDEVICE_FIXIP :
		if (last_acode < 0) { //last not logged or from bad place
		    //Login from ..FixIP
	    	    set_login_detail (unum, acode, dnum, bindTable[num].inum); //
		} else if (last_acode == acode ) {
	    	    //LOGIN... from FIXIP
	    	    set_login_detail (unum, acode, dnum, bindTable[num].inum); //
		} else {
	    	    if (is_logged_while_back(unum)) {
	        	//LOGIN...from FixIP
	    	        set_login_detail (unum, acode, dnum, bindTable[num].inum); 
	    	    } else {
	        	//LOGIN... from last_code random IP
			ipa = get_ip_in_acode (last_acode);
	    	        set_login_detail (unum, last_acode, dnum, ipa); //
	    	    }
		}
	    ns_start_transaction ("OLDUSR_OWNDEVICE_FIXIP");
	    break;	
	case TEST_OLDUSR_OWNDEVICE_MOBILE_GOODIP:
		if (last_acode < 0) { //last not logged or from bad place
	    	    //LOGIN...from random IP in acode
	    	    set_login_detail (unum, acode, dnum, bindTable[num].inum); //
		} else {
	    	    if (is_logged_while_back(unum)) {
	        	//LOGIN...random acode
			ipa = get_ip_in_acode (acode);
	    	        set_login_detail (unum, acode, dnum, ipa); //
	    	    } else {
	        	//LOGIN... from random IP in last_code
			ipa = get_ip_in_acode (last_acode);
	    	        set_login_detail (unum, last_acode, dnum, ipa); //
	    	    }
		}
	    ns_start_transaction ("OLDUSR_OWNDEVICE_MOBILE_GOODIP");
	    break;
	case TEST_OLDUSR_OWNDEVICE_MOBILE_FARIP:
		if (!CaseLoop) { //First time
		  //printf ("unum=%d entered Case Loop =0\n", unum);
		  if (last_acode < 0) { //last not logged or from bad place
	    	    //LOGIN from home IP
	    	    //and lOGIN from far random IP two loops
		    ns_set_int_val ("CaseLoop", 1);
	    	    set_login_detail (unum, acode, dnum, bindTable[num].inum); 
		    CaseLoop = 1;
		    //printf ("unum=%d  no last login  Case Loop =0\n", unum);
		  } else {
	    	    if (is_logged_while_back(unum)) {
	        	//LOGIN from home IP
	        	//and lOGIN from far random IP two loops
			ns_set_int_val ("CaseLoop", 1);
			CaseLoop = 1;
	    	        set_login_detail (unum, acode, dnum, bindTable[num].inum); 
		        //printf ("unum=%d  no  lg for long login  Case Loop =0\n", unum);
	    	    } else {
		        //printf ("unum=%d  Straight  Case Loop =0\n", unum);
			if (last_acode == acode) {
		    	    //LOGIN from random IP in random acode
			    ipa = get_ip_not_in_acode (acode, &last_acode);
	    	            set_login_detail (unum, last_acode, dnum, ipa); //
			} else  {
		    	    //lOG from home IP
	    	            set_login_detail (unum, acode, dnum, bindTable[num].inum); 
			}
	    	    }
		  }
		} else {
		  //printf ("unum=%d entered Case Loop =1\n", unum);
			ns_set_int_val ("CaseLoop", 0);
			CaseLoop = 0;
		  	//printf ("unum=%d about to get_ip Case Loop =1 acode=%hd\n", unum, acode);
			ipa = get_ip_not_in_acode (acode, &last_acode);
		  	//printf ("unum=%d Done get_ip Case Loop =1 acode=%hd\n", unum, acode);
	    	        set_login_detail (unum, last_acode, dnum, ipa); //
		}
	    if (!CaseLoop) ns_start_transaction ("OLDUSR_OWNDEVICE_MOBILE_FARIP");
	    //printf ("unum=%d  Case 2 Loop Last %d\n", unum, CaseLoop);
	    break;
	case TEST_OLDUSR_OWNDEVICE_MOBILE_BLACKIP:
		//LOGIN from blackIP
	        ipa = get_ip_in_blacklist_acode ();
	        set_login_detail (unum, -2, dnum, ipa); //
	    ns_start_transaction ("OLDUSR_OWNDEVICE_MOBILE_BLACKIP");
	    break;
	case TEST_OLDUSR_PUBDEVICE_GOODIP:
	   	if (last_acode < 0) { //last not logged or from bad place
	    	    //lOGIN...from random IP in acode
		    ipa = get_ip_in_acode (acode);
	    	    set_login_detail (unum, acode, -1, ipa);
		} else {
	    	    if (is_logged_while_back(unum)) {
	        	//lOGIN...random acode
		        ipa = get_ip_in_acode (acode);
	    	        set_login_detail (unum, acode, -1, ipa);
	    	    } else {
	        	//LOGIN... from random IP in last_code
		        ipa = get_ip_in_acode (last_acode);
	    	        set_login_detail (unum, last_acode, -1, ipa);
	    	    }
		}
	    ns_start_transaction ("OLDUSR_PUBDEVICE_GOODIP");
	    break;
	case TEST_OLDUSR_PUBDEVICE_FARIP:
		if (!CaseLoop) { //First time
		  //printf ("unum=%d entered Case 5 Loop =0\n", unum);
		  if (last_acode < 0) { //last not logged or from bad place
	    	    //LOGIN from home IP
	    	    //and lOGIN from far random IP two loops
			ns_set_int_val ("CaseLoop", 1);
			CaseLoop = 1;
		        ipa = get_ip_in_acode (acode);
	    	        set_login_detail (unum, acode, -1, ipa); 
		        //printf ("unum=%d no last log entered Case 5 Loop =0\n", unum);
		  } else  {
	    	    if (is_logged_while_back(unum)) {
	        	//LOGIN from home IP
	        	//and LOGIN from far random IP two loops
			ns_set_int_val ("CaseLoop", 1);
			CaseLoop = 1;
		        ipa = get_ip_in_acode (acode);
	    	        set_login_detail (unum, acode, -1, ipa); 
		        //printf ("unum=%d no long  log entered Case 5 Loop =0\n", unum);
		    } else  {
		        //printf ("unum=%d no straight  log entered Case 5 Loop =0\n", unum);
			if (last_acode == acode) {
		    	    //lOGIN from random IP in random acode
			    ipa = get_ip_not_in_acode (acode, &last_acode);
	    	            set_login_detail (unum, last_acode, -1, ipa); //
			} else  {
		    	   //LOG from home IP
		            ipa = get_ip_in_acode (acode);
	    	            set_login_detail (unum, acode, -1, ipa); 
			}
	    	    }
		  }
		} else {
		    //printf ("unum=%d  Case 5 Loop =1\n", unum);
		    ns_set_int_val ("CaseLoop", 0);
		    CaseLoop = 0;
		    ipa = get_ip_not_in_acode (acode, &last_acode);
	    	    set_login_detail (unum, last_acode, -1, ipa); //
		}
	    if (!CaseLoop) ns_start_transaction ("OLDUSR_PUBDEVICE_FARIP");
	    //printf ("unum=%d  Case 5 Loop Last %d\n", unum, CaseLoop);
	    break;
	case TEST_OLDUSR_PUBDEVICE_BLACKIP:
		//LOGIN from blackIP
	        ipa = get_ip_in_blacklist_acode ();
	        set_login_detail (unum, -2, -1, ipa); //
	    ns_start_transaction ("OLDUSR_PUBDEVICE_BLACKIP");
	    break;
	case TEST_OLDUSR_NEWDEVICE_FIXIP:
		if (last_acode < 0) { //last not logged or from bad place
	    	    //LOGIN...from home IP
	    	    set_login_detail (unum, acode, -1, bindTable[num].inum); //
		} else if (last_acode == acode ) {
	    	    //LOGIN... from FIXIP
	    	    set_login_detail (unum, acode, -1, bindTable[num].inum); //
		} else {
	    	    if (is_logged_while_back(unum)) {
	       	        //LOGIN...from homeIP
	    	    	set_login_detail (unum, acode, -1, bindTable[num].inum); //
	    	    } else {
	        	//LOGIN... from random IP in last_code
		        ipa = get_ip_in_acode (acode);
	    	        set_login_detail (unum, acode, -1, ipa); 
	    	    }
		}
	    ns_start_transaction ("OLDUSR_NEWDEVICE_FIXIP");
	    break;
	case TEST_NEWUSR_NEWDEVICE_NEWIP:
	    //LOGIN...from random home IPA - no save time and last logtime
            ipa = get_ip_in_acode (acode);
	    set_login_detail (-1, -1, -1, ipa); 
	    ns_start_transaction ("NEWUSR_NEWDEVICE_NEWIP");
	    break;
	case TEST_NEWUSR_NEWDEVICE_FARIP:
	    //LOGIN...from random home IPA - no save time and last logtime
	    //LOGIN from home IP
	    //and lOGIN from far random IP
	   if (!CaseLoop) { //First time
		    ns_set_int_val ("CaseLoop", 1);
 		    CaseLoop = 1;
	            ipa = get_ip_in_acode (acode);
	            set_login_detail (-1, -1, -1, ipa); 
	    } else { //next time
		    ns_set_int_val ("CaseLoop", 0);
		    CaseLoop = 0;
		    ipa = get_ip_not_in_acode (acode, &last_acode);
	            set_login_detail (-1, -1, -1, ipa); //
	    }
	    if (!CaseLoop) ns_start_transaction ("NEWUSR_NEWDEVICE_FARIP");
	    break;
	case TEST_NEWUSR_NEWDEVICE_BLACKIP:
		//LOGIN from blackIP
	        ipa = get_ip_in_blacklist_acode ();
	        set_login_detail (-1, -1, -1, ipa); //
	    ns_start_transaction ("NEWUSR_NEWDEVICE_BLACKIP");
	    break;
	case TEST_NEWUSR_OLDDEVICE_OLDIP:
	    //Sending using home IP - save no login time or last acode
	    set_login_detail (-1, -1, dnum, bindTable[num].inum); //
	    ns_start_transaction ("NEWUSR_OLDDEVICE_OLDIP");
	    break;
	case TEST_NEWUSR_OLDDEVICE_NEWIP:
	    //Sending using random home IP - save no login time or last acode
	    ipa = get_ip_in_acode (acode);
	    set_login_detail (-1, -1, dnum, ipa); //
	    ns_start_transaction ("NEWUSR_OLDDEVICE_NEWIP");
	    break;
	case TEST_NEWUSR_OLDDEVICE_BLACKIP:
	    //Sending using black ip IP - save no login time or last acode
	    ipa = get_ip_in_blacklist_acode ();
	    set_login_detail (-1, -1, dnum, ipa); //
	    ns_start_transaction ("NEWUSR_OLDDEVICE_BLACKIP");
	    break;
	default:
	    printf("unsupported case\n");
	}
		
	//printf ("CaseLoop = %d tcase = %d\n", CaseLoop, tcase);
	if (!CaseLoop) runTimesDB[tcase]++;
	//printf ("num tx = %d\n", runTimesDB[tcase]);

   return NS_USE_CONFIGURED_THINK_TIME;
}

int check_page_class1_0_html(void) {
int tcase;
int num, unum, dnum;
int CaseLoop;

	CaseLoop = ns_get_int_val("CaseLoop");
	num = ns_get_int_val("Bnum");
	dnum = bindTable[num].dnum;
	unum = bindTable[num].unum;

	//printf ("Entering check unum=%d pid=%d\n", unum, getpid(0));
	tcase = ns_get_int_val("TestCase");
	switch (tcase) {
	case TEST_OLDUSR_OWNDEVICE_FIXIP:
	case TEST_OLDUSR_OWNDEVICE_MOBILE_GOODIP:
	case TEST_OLDUSR_OWNDEVICE_MOBILE_FARIP:
	case TEST_OLDUSR_OWNDEVICE_MOBILE_BLACKIP:
	    save_cookie_vars(dnum);
	    break;	
	case TEST_OLDUSR_PUBDEVICE_GOODIP:
	case TEST_OLDUSR_PUBDEVICE_FARIP:
	case TEST_OLDUSR_PUBDEVICE_BLACKIP:
	case TEST_OLDUSR_NEWDEVICE_FIXIP:
	case TEST_NEWUSR_NEWDEVICE_NEWIP:
	case TEST_NEWUSR_NEWDEVICE_FARIP:
	case TEST_NEWUSR_NEWDEVICE_BLACKIP:
	    break;
	case TEST_NEWUSR_OLDDEVICE_OLDIP:
	case TEST_NEWUSR_OLDDEVICE_NEWIP:
	case TEST_NEWUSR_OLDDEVICE_BLACKIP:
	    save_cookie_vars(dnum);
	    break;
	default:
	    printf("unsupported case\n");
	}
#if 0
	printf ("UUID = %s\n", ns_eval_string("{UUID}"));
	printf ("Uname = %s\n", ns_eval_string("{Uname}"));
	printf ("CID1 = %s\n", ns_eval_string("{CID1}"));
	printf ("CID2 = %s\n", ns_eval_string("{CID2}"));
	printf ("IPaddr = %s\n", ns_eval_string("{IPaddr}"));
#endif


#if 0
	printf ("Cook1 = %s\n", ns_eval_string("{Cook1}"));
	printf ("Cook2 = %s\n", ns_eval_string("{Cook2}"));
#endif

	if (CaseLoop) {
	    return class1_0_html;
	} else {
	    ns_end_transaction (test_case_names[tcase], 0);
	    return -1;
	}
}

void exit_script() {
	return;
}

void user_test_exit() {
	call_test_exit();
}
