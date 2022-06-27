
//****************************************************** PARAMS **********************************************************************************************************//
nsl_static_var(SKUIdFP:1, File=SampleSKUId.txt, Refresh=USE, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=No);
nsl_random_number_var(SkuCount, Min=10, Max=30, Format=%01lu, Refresh=SESSION);
nsl_search_var(AvlLowSkuIdSP, PAGE=CheckItemAvailabilityApi, LB="\"Availabilitystatus\": \"Low|", RB="\",", LBMATCH=FIRST, ORD=ALL, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
