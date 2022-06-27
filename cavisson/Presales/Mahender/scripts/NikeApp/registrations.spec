nsl_search_var(token, PAGE=Login, LB="\"token\": \"", RB="\",", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(attachment_url, PAGE=Get_Attachment_URL, LB="\"url\": \"", RB="\",", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(attachment_key, PAGE=Get_Attachment_URL, LB="\"key\": \"", RB="\",", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(attachment_x-amz-algorithm, PAGE=Get_Attachment_URL, LB="\"x-amz-algorithm\": \"", RB="\",", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(attachment_x-amz-credential, PAGE=Get_Attachment_URL, LB="\"x-amz-credential\": \"", RB="\",", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(attachment_x-amz-date, PAGE=Get_Attachment_URL, LB="\"x-amz-date\": \"", RB="\",", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(attachment_x-amz-security-token, PAGE=Get_Attachment_URL, LB="\"x-amz-security-token\": \"", RB="\",", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(attachment_policy, PAGE=Get_Attachment_URL, LB="\"policy\": \"", RB="\",", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(attachment_x-amz-signature, PAGE=Get_Attachment_URL, LB="\"x-amz-signature\": \"", RB="\"", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(incident_number, PAGE=Create_Incident, LB="{\"number\": \"", RB="\"}", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);

