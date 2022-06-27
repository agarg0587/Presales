#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

extern int init_script();
extern int exit_script();
typedef void FlowReturn;
extern FlowReturn kafka_client();

void runlogic()
{
//  init_script();
  kafka_client();
  ns_exit_session();
}

