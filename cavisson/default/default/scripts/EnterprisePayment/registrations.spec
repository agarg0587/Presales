nsl_static_var(AccountID:1,code:2,mobno:3, File=file.seq, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All);
nsl_static_var(Version:1, File=ver.seq, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All);
nsl_web_find(TEXT="associateId", PAGE=PaymentServicesV1, PAGE=PaymentServicesV2, FAIL=NOTFOUND, ActionOnFail=CONTINUE);
