#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../include/ns_string.h"
#include "script.h"

int init_script() {

	return class1_0_html;
}

int pre_page_class1_0_html(void) {
   return NS_USE_CONFIGURED_THINK_TIME;
}

int check_page_class1_0_html(void) {

	return -1;
}

void exit_script() {
	return;
}
