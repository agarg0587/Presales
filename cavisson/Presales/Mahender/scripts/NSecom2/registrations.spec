nsl_static_var(search_item:1, File=search_item, Refresh=SESSION, Mode=RANDOM, EncodeMode=All);
nsl_search_var(product_id, PAGE=searchProduct, LB="<a href=\"productPage?productid=", RB="&", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(product_price, PAGE=*, LB="&prodImage=shirt1.png&prodPrice=", RB="\"", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(cart_id, PAGE=addToBag, LB="<input type=hidden name=cartId value=", RB=" >", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_static_var(p_name:1, File=p_name, Refresh=SESSION, Mode=RANDOM, EncodeMode=All);
nsl_static_var(p_city:1, File=p_city, Refresh=SESSION, Mode=RANDOM, FirstDataLine=2, EncodeMode=All);
nsl_static_var(postal_code:1, File=postal_code, Refresh=SESSION, Mode=RANDOM, FirstDataLine=2, EncodeMode=All);
nsl_web_find(TEXT="men", PAGE=*, FAIL=NOTFOUND, ActionOnFail=STOP);
