#define MY_COOKIE_SIZE 24

#define LOGIN_SEC_THRESHOLD 1800

#define TEST_OLDUSR_OWNDEVICE_FIXIP 0
#define TEST_OLDUSR_OWNDEVICE_MOBILE_GOODIP 1
#define TEST_OLDUSR_OWNDEVICE_MOBILE_FARIP 2
#define TEST_OLDUSR_OWNDEVICE_MOBILE_BLACKIP 3
#define TEST_OLDUSR_PUBDEVICE_GOODIP 4
#define TEST_OLDUSR_PUBDEVICE_FARIP 5
#define TEST_OLDUSR_PUBDEVICE_BLACKIP 6
#define TEST_OLDUSR_NEWDEVICE_FIXIP 7
#define TEST_NEWUSR_NEWDEVICE_NEWIP 8
#define TEST_NEWUSR_NEWDEVICE_FARIP 9
#define TEST_NEWUSR_NEWDEVICE_BLACKIP 10
#define TEST_NEWUSR_OLDDEVICE_OLDIP 11
#define TEST_NEWUSR_OLDDEVICE_NEWIP 12
#define TEST_NEWUSR_OLDDEVICE_BLACKIP 13

#define MAX_TEST_CASES 14

char  *test_case_names[] = {
"OLDUSR_OWNDEVICE_FIXIP",
"OLDUSR_OWNDEVICE_MOBILE_GOODIP",
"OLDUSR_OWNDEVICE_MOBILE_FARIP",
"OLDUSR_OWNDEVICE_MOBILE_BLACKIP",
"OLDUSR_PUBDEVICE_GOODIP",
"OLDUSR_PUBDEVICE_FARIP",
"OLDUSR_PUBDEVICE_BLACKIP",
"OLDUSR_NEWDEVICE_FIXIP",
"NEWUSR_NEWDEVICE_NEWIP",
"NEWUSR_NEWDEVICE_FARIP",
"NEWUSR_NEWDEVICE_BLACKIP",
"NEWUSR_OLDDEVICE_OLDIP",
"NEWUSR_OLDDEVICE_NEWIP",
"NEWUSR_OLDDEVICE_BLACKIP",
};

short ip_good_area_codes[] = {230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 
			      240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 
			      250, 251, 252, 253, 255, 255, 256, 257, 258, 259, 
			      260, 261, 262, 263, 266, 265, 266, 267, 268, 269, 
			      270, 271, 272, 273, 277, 275, 276, 277, 278, 279, 
			      280, 281, 282, 283, 288, 285, 286, 287, 288, 289};
short ip_bad_area_codes[] = { 0, 1, 2, 3, 4, 5, 6 };

int ip_num_good_acodes = 60;
int ip_num_bad_acodes = 7;

typedef struct {
	char *signature;
	short pct;
	short cum_pct;
} DevSigDist;

DevSigDist deviceSignatures[]= {
	{"InternetExplorer6.0 UA_IE Mozilla_CA/4.79 [en] (X11; U; Linux 2.4.18-3d_epoll i686)", 55, 55},
	{"InternetExplorer5.5 UA_IE Mozilla_CA/4.79 [en] (X11; U; Linux 2.4.18-3d_epoll i686)", 15, 70},
	{"InternetExplorer5.0 UA_IE Mozilla_CA/4.79 [en] (X11; U; Linux 2.4.18-3d_epoll i686)", 15, 85},
	{"Netscape7.0 UA_NET Mozilla_CA/4.79 [en] (X11; U; Linux 2.4.18-3d_epoll i686)", 5, 90},
	{"Netscape4.0 UA_NET Mozilla_CA/4.79 [en] (X11; U; Linux 2.4.18-3d_epoll i686)", 3, 93},
	{"Mozilla1.0 UA_NET Mozilla_CA/4.79 [en] (X11; U; Linux 2.4.18-3d_epoll i686)", 3, 96},
	{"Opera6.0 UA_OTHER Mozilla_CA/4.79 [en] (X11; U; Linux 2.4.18-3d_epoll i686)", 4, 100}
};

/**********************************************************************
User: - Old (90)  - Device Old (90) 	- IP Old (90)
					- IP Mobile (10) - Good IP (80)
							 - Login quick from far IP (10)
							 - Black listed IP login (10)
		  - Device Public (7)   - Good Random IP (80)
				        - Login quick from far IP (10)
				        - Black listed IP login (10)

		  - Device New (3) 	-  Old IP (100)
					(Other case are like using Public device)

	New (10)  - Device New (80) 	- IP Random good (80)
				        - Login quick from far IP (10)
				        - Black listed IP login (10)

		  - Device Old (20)	- IP old (80)
					- Ip Random good (10)
					- IP Blacklisted (10)

***********************************************************************/

/**********************************************************
In the begining set, set last_acode = -1;
LOGIN .. get ip if needed if random IP, last_acode= last_logintime= 
(-2, if blackip)
TEST_OLDUSR_OWNDEVICE_FIXIP: Use entry as is. Save cookies - 
	if (last_acode < 0) { //last not logged or from bad place
	    LOGIN... from FIXIP
	} else {last_acode == acode ) {
	    LOGIN... from FIXIP
	} else {
	    if (logtime diff > 0) {
	        LOGIN...from FixIP
	    } else {
	        LOGIN... from last_code random IP
	    }
	}

TEST_OLDUSR_OWNDEVICE_MOBILE_GOODIP: Mobile user save cookie
	if (last_acode < 0) { //last not logged or from bad place
	    LOGIN...from random IP in acode
	} else {
	    if (logtime diff > 0) {
	        LOGIN...random acode
	    } else {
	        LOGIN... from random IP in last_code
	    }
	}

TEST_OLDUSR_OWNDEVICE_MOBILE_FARIP: Mobile user quick login from far , 
save cookie
	if (last_acode < 0) { //last not logged or from bad place
	    LOGIN from home IP
	    and lOGIN from far random IP
	    two loops
	} else  {
	    if (logtime diff > 0) {
	        LOGIN from home IP
	        and lOGIN from far random IP
	    	two loops
	} else  {
	    } else {
		if (last_code == acode)
		    LOGIN from random IP in random acode
		else 
		    lOG from home IP
	    }
	}

TEST_OLDUSR_OWNDEVICE_MOBILE_BLACKIP : Mobile user from black listed 
IP, save cookie
	LOGIN from blackIP

TEST_OLDUSR_PUBDEVICE_GOODIP: No save , no cookie send, send random dev
	if (last_acode < 0) { //last not logged or from bad place
	    lOGIN...from random IP in acode
	} else {
	    if (logtime diff > 0) {
	        lOGIN...random acode
	    } else {
	        LOGIN... from random IP in last_code
	    }
	}

TEST_OLDUSR_PUBDEVICE_FARIP : Mobile user quick login from far , no 
save cookie
	if (last_acode < 0) { //last not logged or from bad place
	    LOGIN from home IP
	    and lOGIN from far random IP
	    two loops
	} else  {
	    if (logtime diff > 0) { //logged in long back
	        LOGIN from home IP
	        and LOGIN from far random IP
	    	two loops
	} else  {
	    } else {
		if (last_code == acode)
		    lOGIN from random IP in random acode
		else 
		    LOG from home IP
	    }
	}
TEST_OLDUSR_PUBDEVICE_BLACKIP : Mobile user from black listed IP, no 
save cookie
	LOGIN from blackIP

TEST_OLDUSR_NEWDEVICE_FIXIP : send no cookie and no save  cookie
	if (last_acode < 0) { //last not logged or from bad place
	    LOGIN...from home IP
	} else {last_acode == acode ) {
	    LOGIN... from FIXIP
	} else {
	    if (logtime diff > 0) {
	        LOGIN...from homeIP
	    } else {
	        LOGIN... from random IP in last_code
	    }
	}

TEST_NEWUSR_NEWDEVICE_NEWIP : send random new user id, send no cookie and no save  cookie
				Send no cookie, save no login time or last acode
	    LOGIN...from random home IPA - no save time and last logtime
TEST_NEWUSR_NEWDEVICE_FARIP : Mobile user quick login from far , no 
save cookie. Send no cookie, save no login time or last acode
	    LOGIN from home IP
	    and lOGIN from far random IP
	    two loops

TEST_NEWUSR_NEWDEVICE_BLACKIP : Mobile user quick login from far , no 
save cookie. Send no cookie, save no login time or last acode
	LOGIN from blackIP
TEST_NEWUSR_OLDDEVICE_OLDIP: Use random new id, send cookie, save cookie
	Sending using home IP - save no login time or last acode
TEST_NEWUSR_OLDDEVICE_NEWIP :Use random new id, send cookie, save cookie
	Sending using random home IP - save no login time or last acode
TEST_NEWUSR_OLDDEVICE_BLACKIP ::Use random new user id, send cookie, save cookie
	Sending using black ip IP - save no login time or last acode

Q: when last login from blackip and now from non-black?

GEN_DATA_SIZE DEVICE|USER num
#%Device Ditsribution over users :
# Like, 80% devices have 1 user assocaited, 30% devices have 2 users, 
10% have 3 users
# Contraints : All pct must add to 100, entries with same first field 
should not repeat
PCT_DIST_DEVICE_OVER_USERS  1 50
PCT_DIST_DEVICE_OVER_USERS  2 30
PCT_DIST_DEVICE_OVER_USERS  3-9 1
PCT_DIST_DEVICE_OVER_USERS  1:50 2:30 3-9:1 

#%User Ditsribution over devices:
# Like, 50% users have 2 devices assocaited, 30% devices have 2 users, 
10% have 3 devices
USER_DIS_PCT_OVER_DEVICE  1:50 2:30 3-9:1 

PCT_DIST_DEVICE_OVER_IP  1:50 2:30 3-9:1 

PCT_DIST_IP_OVER_DIST  1:50 2:30 3-9:1 

GEOGRAPHIC_USER_DISTRIBUTION USCA 30

BLACKLIST_ZONES a b c

TODO: input from mix file for pct to caseDist
USR_OLD_NEW_MIX  90 10 
OLDUSR_DEV_OLD_PUB_NEW_MIX 
NEWUSR_DEV_NEW_OLD_MIX
OLDUSR_OLDDEV_LOC_FIX_MOBILE_MIX
OLDUSR_OLDDEV_MOBILE_IP_GOOD_FAR_BAD_MIX
OLDUSR_NEWDEV_IP_OLD
NEWUSR_NEWDEV_IP_GOOD_FAR_BAD_MIX
NEWUSR_OLDDEV_IP_OLD_NEW_BAD_MIX

************************************************************/

struct {
	unsigned char userOld;
	unsigned char userNew;

	unsigned char userOld_deviceOld;
	unsigned char userOld_devicePublic;
	unsigned char userOld_deviceNew;

	unsigned char userNew_DeviceNew;
	unsigned char userNew_DeviceOld;

	unsigned char userOld_deviceOld_ipOLD;
	unsigned char userOld_deviceOld_ipMobile;

	unsigned char userOld_deviceOld_ipMobile_good;
	unsigned char userOld_deviceOld_ipMobile_quickFarIP;
	unsigned char userOld_deviceOld_ipMobile_blaklistIP;

	unsigned char userOld_devicePublic_goodRandomIP;
	unsigned char userOld_devicePublic_quickFarIP;
	unsigned char userOld_devicePublic_blacklistIP;

	unsigned char userOld_deviceNew_OldIP;

	unsigned char userNew_DeviceNew_IPRandomGood;
	unsigned char userNew_DeviceNew_quickFarIP;
	unsigned char userNew_DeviceNew_blacklistIP;

	unsigned char userNew_DeviceOld_OldIP;
	unsigned char userNew_DeviceOld_NewIP;
	unsigned char userNew_DeviceOld_blacklistIP;
} caseDist = {90, 			10,
	      90, 7, 3,			80,20,
	      90,10,  80,10,10, 80,10,10, 100, 80,10,10, 80,10,10};
int runTimesDB[MAX_TEST_CASES];

typedef struct {
	int unum;
	int dnum;
	char inum[16];
} UserDeviceIP;

UserDeviceIP *bindTable;

int num_bind_entries;;

#define MY_USER_SIZE 10
typedef struct {
	char uname[MY_USER_SIZE];
	short acode;
	short last_acode;
	unsigned long login_time;	
} UserName;

UserName *userTable;
int num_users;

typedef struct {
	char cookie1[MY_COOKIE_SIZE];
	char cookie2[MY_COOKIE_SIZE];
	short dev_signature;
} DeviceName;

DeviceName *deviceTable;
int num_devices;

extern inline char * get_new_user_name ();
//Save off the response 
void save_cookie_vars (int devnum)
{
	strcpy( deviceTable[devnum].cookie1, ns_eval_string("{Cook1}"));
	strcpy( deviceTable[devnum].cookie2, ns_eval_string("{Cook2}"));
}

//Set all the needed variables for the request
inline void
set_login_detail ( int unum, short acode, int dnum, char *ipadr)
{
	ns_save_string (ns_get_guid(), "UUID");
	if (unum != -1) {
	    ns_save_string (userTable[unum].uname, "Uname");
	    userTable[unum].login_time = times(NULL);
	} else  {
	    ns_save_string (get_new_user_name(), "Uname");
	}
	
	if (acode != -1)
	    userTable[unum].last_acode = acode;

	if (dnum != -1) {
	    ns_save_string( deviceTable[dnum].cookie1, "CID1");
	    ns_save_string( deviceTable[dnum].cookie2, "CID2");
	}

        ns_save_string( ipadr, "IPaddr");
}

void 
create_device_entries()
{
int i, j, rnum, num;
int num_dev_sig = sizeof(deviceSignatures)/sizeof(DevSigDist);
FILE *fp, *bfp, *ufp;
char buf[4096];
char *tok;
char *stringp;

    //Readd User-DEv-IP bindings
    bfp = fopen("/home/netstorm/work/sys/bindings.dat", "r");
    if (!bfp) {
	printf ("User-Dev-IP bindings sys/bindings.dat failed to open\n");
	exit(1);
    }
    if (!fgets (buf, 4096, bfp)) {
	printf ("User-Dev-IP bindings sys/bindings.dat bad format\n");
	exit(1);
    }
    if (sscanf (buf, "%d %d", &num_devices, &num_bind_entries) != 2) {
	printf ("User-Dev-IP bindings sys/bindings.dat Bad format\n");
	exit(1);
    }
    printf ("num_dev = %d num_bind_entries=%d\n", num_devices, num_bind_entries);
    i = 0;
    bindTable = (UserDeviceIP *)do_shmget(num_bind_entries * sizeof(UserDeviceIP), "User Device IP Table shm");
    while (fgets (buf, 4096, bfp)) {
	    buf[strlen(buf) -1 ] = '\0';
	    stringp = buf;
	    tok = strsep(&stringp, ",");
	    bindTable[i].unum = atoi(tok);
	    //tok = strsep(&stringp, ",");
	    //bindTable[i].acode = (short)atoi(tok);
	    tok = strsep(&stringp, ",");
	    bindTable[i].dnum = atoi(tok);
	    tok = strsep(&stringp, ",");
	    strcpy( bindTable[i].inum, tok);
	    if (i < 5)
		printf ("unum=(%d) dnum=(%d) ip=(%s)\n", bindTable[i].unum, bindTable[i].dnum, bindTable[i].inum);
	    i++;
    }
    fclose (bfp);


    //Readd User-DEv-IP bindings
    ufp = fopen("/home/netstorm/work/sys/users.dat", "r");
    if (!ufp) {
	printf ("User Names sys/users.dat failed to open\n");
	exit(1);
    }
    if (!fgets (buf, 4096, ufp)) {
	printf ("User sys/users.dat bad format\n");
	exit(1);
    }
    if (sscanf (buf, "%d", &num_users) != 1) {
	printf ("User sys/users.dat Bad format\n");
	exit(1);
    }
    printf ("num_user = %d\n", num_users);
    i = 0;
    userTable = (UserName *)do_shmget(num_users * sizeof(UserName), "User Table shm");
    while (fgets (buf, 4096, ufp)) {
	    buf[strlen(buf) -1 ] = '\0';
	    stringp = buf;
	    tok = strsep(&stringp, ",");
	    strcpy( userTable[i].uname, tok);
	    tok = strsep(&stringp, ",");
	    userTable[i].acode = (short)atoi(tok);
	    tok = strsep(&stringp, ",");
	    userTable[i].last_acode = (short)atoi(tok);
	    tok = strsep(&stringp, ",");
	    userTable[i].login_time = atoi(tok);
	    if (i < 5)
		printf ("uname=(%s) acode=(%hd) last_acode=(%hd) ltime=(%lu)\n", userTable[i].uname, 
				userTable[i].acode, userTable[i].last_acode, userTable[i].login_time);
	    i++;
    }
    fclose (ufp);
    //Read Devies from last snapshot, if available, else create new
    fp = fopen("/home/netstorm/work/sys/devNames.dat", "r");
    if (fp) {
        if (!fgets (buf, 4096, fp)) {
	    printf ("Dev Table sys/devNames.dat bad format\n");
	    exit(1);
        }
    	if (sscanf (buf, "%d", &num) != 1) {
	    printf ("Dev Table sys/devNames.dat Bad format\n");
	    exit(1);
    	}
	if (num != num_devices) {
	    printf ("sys/devNames.dat and bindings.dat inconsistent\n");
	    exit(1);
	}

	deviceTable = (DeviceName *)do_shmget(num * sizeof(DeviceName), "Device Name Table shm");
	i = 0;
	while (fgets (buf, 4096, fp)) {
	    stringp = buf;
	    tok = strsep(&stringp, ",");
	    strcpy( deviceTable[i].cookie1, tok);
	    tok = strsep(&stringp, ",");
	    strcpy( deviceTable[i].cookie2, tok);
	    tok = strsep(&stringp, ",");
	    deviceTable[i].dev_signature = atoi(tok); 
	    if (i < 5)
		printf ("ck1=(%s) ck2=(%s) sig=%hd\n", deviceTable[i].cookie1, deviceTable[i].cookie2, deviceTable[i].dev_signature);
	    i++;
	}
	fclose (fp);
    } else {
	deviceTable = (DeviceName *)do_shmget(num * sizeof(DeviceName), "Device Name Table shm");
	for (i = 0; i < num; i++) {
	   deviceTable[i].cookie1[0] = '\0'; 
	   deviceTable[i].cookie2[0] = '\0'; 
	   rnum = random()%100;
	   for (j=0; j < num_dev_sig; j++) {
		if (rnum < deviceSignatures[j].cum_pct)
		    break;
	   }
	   deviceTable[i].dev_signature = j; 
	}
   }
}

void call_test_exit() {
int i;
FILE *fp;

    fp = fopen("/home/netstorm/work/sys/devNames.dat", "w");
    if (fp) {
	fprintf (fp, "%d\n", num_devices);
	for (i = 0; i < num_devices; i++) {
	    fprintf(fp, "%s,%s,%hd\n", 
	    	deviceTable[i].cookie1, 
	    	deviceTable[i].cookie2, 
	    	deviceTable[i].dev_signature); 
	}
	fflush(fp);
	fclose (fp);
    }

    fp = fopen("/home/netstorm/work/sys/users.dat", "w");
    if (fp) {
	fprintf (fp, "%d\n", num_users);
	for (i = 0; i < num_users; i++) {
	    fprintf(fp, "%s,%hd,%hd,%lu\n", 
	    	userTable[i].uname, 
	    	userTable[i].acode, 
	    	userTable[i].last_acode, 
	    	userTable[i].login_time );
	}
	fflush(fp);
	fclose (fp);
    }
    
    //for (i=0; i < MAX_TEST_CASES; i++)
	//printf ("%s: num tx = %d\n", test_case_names[i], runTimesDB[i]);
}


char testCaseDist[10000];

int test_max_hpct;

void set_test_cases()
{
int i, j, sum; 
int caseDB[MAX_TEST_CASES];

	//Check Data consistency
	if ((caseDist.userOld + caseDist.userNew) != 100 ) {
	    printf ("SUM of all user distributions should 100\n");
	    exit(1);
	} else if ((caseDist.userOld_deviceOld + caseDist.userOld_devicePublic 
+ caseDist.userOld_deviceNew) != 100 ) {
	    printf ("SUM of all Device distribution for old users must be 100\n");
	    exit(1);
	} else if ((caseDist.userOld_deviceOld_ipOLD + 
caseDist.userOld_deviceOld_ipMobile) != 100 ) {
	    printf ("SUM of all IP distribution for old users wth old devices must be 100\n");
	    exit(1);
	} else if ((caseDist.userOld_deviceOld_ipMobile_good + 
caseDist.userOld_deviceOld_ipMobile_quickFarIP + 
caseDist.userOld_deviceOld_ipMobile_blaklistIP) != 100 ) {
	    printf ("SUM of all IP distribution for old Mobile users wth old devices must be 100\n");
	    exit(1);
	} else if ((caseDist.userOld_devicePublic_goodRandomIP + 
caseDist.userOld_devicePublic_quickFarIP + 
caseDist.userOld_devicePublic_blacklistIP) != 100 ) {
	    printf ("SUM of all IP distribution for old users with using public devices must be 100\n");
	    exit(1);
	} else if ((caseDist.userOld_deviceNew_OldIP) != 100 ) {
	    printf ("SUM of all Device Distribution for all New Users  must be 100\n");
	    exit(1);
	} else if ((caseDist.userNew_DeviceNew + caseDist.userNew_DeviceOld) 
!= 100 ) {
	    printf ("SUM of all IP distribution for old users with using New devices must be 100\n");
	    exit(1);
	} else if ((caseDist.userNew_DeviceNew_IPRandomGood + 
caseDist.userNew_DeviceNew_quickFarIP + caseDist.userNew_DeviceNew_blacklistIP) != 100 
) {
	    printf ("SUM of all IP distribution for NEW users using New devices must be 100\n");
	    exit(1);
	} else if ((caseDist.userNew_DeviceOld_OldIP + 
caseDist.userNew_DeviceOld_NewIP + caseDist.userNew_DeviceOld_blacklistIP) != 100 ) {
	    printf ("SUM of all IP distribution for NEW users using Old devices must be 100\n");
	    exit(1);
	} 

	//Create Case Distribution
	caseDB[TEST_OLDUSR_OWNDEVICE_FIXIP] = caseDist.userOld * 
caseDist.userOld_deviceOld * caseDist.userOld_deviceOld_ipOLD / 100;
	caseDB[TEST_OLDUSR_OWNDEVICE_MOBILE_GOODIP] = caseDist.userOld * 
caseDist.userOld_deviceOld * caseDist.userOld_deviceOld_ipMobile
								* caseDist.userOld_deviceOld_ipMobile_good / 10000;
	caseDB[TEST_OLDUSR_OWNDEVICE_MOBILE_FARIP] = caseDist.userOld * 
caseDist.userOld_deviceOld * caseDist.userOld_deviceOld_ipMobile
								* caseDist.userOld_deviceOld_ipMobile_quickFarIP / 10000;
	caseDB[TEST_OLDUSR_OWNDEVICE_MOBILE_BLACKIP] = caseDist.userOld * 
caseDist.userOld_deviceOld * caseDist.userOld_deviceOld_ipMobile
								* caseDist.userOld_deviceOld_ipMobile_blaklistIP / 10000;
	caseDB[TEST_OLDUSR_PUBDEVICE_GOODIP] = caseDist.userOld * 
caseDist.userOld_devicePublic * caseDist.userOld_devicePublic_goodRandomIP 
/100;
	caseDB[TEST_OLDUSR_PUBDEVICE_FARIP] = caseDist.userOld * 
caseDist.userOld_devicePublic * caseDist.userOld_devicePublic_quickFarIP /100;
	caseDB[TEST_OLDUSR_PUBDEVICE_BLACKIP] = caseDist.userOld * 
caseDist.userOld_devicePublic * caseDist.userOld_devicePublic_blacklistIP 
/100;
	caseDB[TEST_OLDUSR_NEWDEVICE_FIXIP] = caseDist.userOld * 
caseDist.userOld_deviceNew * caseDist.userOld_deviceNew_OldIP / 100;
	caseDB[TEST_NEWUSR_NEWDEVICE_NEWIP] = caseDist.userNew * 
caseDist.userNew_DeviceNew * caseDist.userNew_DeviceNew_IPRandomGood / 100;
	caseDB[TEST_NEWUSR_NEWDEVICE_FARIP] = caseDist.userNew * 
caseDist.userNew_DeviceNew * caseDist.userNew_DeviceNew_quickFarIP / 100;
	caseDB[TEST_NEWUSR_NEWDEVICE_BLACKIP] = caseDist.userNew * 
caseDist.userNew_DeviceNew * caseDist.userNew_DeviceNew_blacklistIP / 100;
	caseDB[TEST_NEWUSR_OLDDEVICE_OLDIP] = caseDist.userNew * 
caseDist.userNew_DeviceOld * caseDist.userNew_DeviceOld_OldIP / 100;
	caseDB[TEST_NEWUSR_OLDDEVICE_NEWIP] = caseDist.userNew * 
caseDist.userNew_DeviceOld * caseDist.userNew_DeviceOld_NewIP / 100;
	caseDB[TEST_NEWUSR_OLDDEVICE_BLACKIP] = caseDist.userNew * 
caseDist.userNew_DeviceOld * caseDist.userNew_DeviceOld_blacklistIP / 100;

	sum = 0;
	for (i = 0, j = 0; i < MAX_TEST_CASES; i++) {
	    printf ("Case %d pct = %d\n", i , caseDB[i]);
	    sum += caseDB[i];
	    for (; j < sum; j++)
		testCaseDist[j] = (char)i;
	}
	test_max_hpct = sum;
}

inline int get_test_case ()
{
int tid, num;
	num = random()%test_max_hpct;
	tid = (int)testCaseDist[num];
	return tid;
}

inline void 
set_init_vars()
{
int tcase;
int ncase;
int ret;

	tcase = get_test_case();
	ret = ns_set_int_val ("TestCase", tcase);
	ns_set_int_val ("CaseLoop", 0);
	ncase = ns_get_int_val ("TestCase");
	//printf ("Final : tcase= %d tcaseenv=%d CaseLoop=%d\n", tcase, ncase, ns_get_int_val ("CaseLoop"));
}

inline char *
get_new_user_name ()
{
int num;
static char username[16];

	num = random()%1000000;
	num += num_users;
	sprintf (username, "U%08X", num);
	return username;
}

inline int
is_logged_while_back( int unum)
{
	if (((times(NULL) - userTable[unum].login_time)) > LOGIN_SEC_THRESHOLD)
	    return 1;
	else
	    return 0;
}

static char *
get_ip_in_acode (short acode)
{
    return (ns_char_ip(get_an_IP_address_for_area (acode)));
}

static char *
get_ip_not_in_acode (short acode, short *new_acode)
{
short ncode;
int num;

	do {
	    num = random()%ip_num_good_acodes;
	    ncode = ip_good_area_codes[num];
	} while (acode == ncode);

	*new_acode = ncode;
        return (ns_char_ip(get_an_IP_address_for_area (ncode)));
}

static char *
get_ip_in_blacklist_acode ()
{
short ncode;
int num;
	    num = random()%ip_num_bad_acodes;
	    ncode = ip_bad_area_codes[num];

        return (ns_char_ip(get_an_IP_address_for_area (ncode)));
}
