#include <stdbool.h>

#include <string.h>

# 1 
undefined8 func0(char *param_1,undefined8 param_2,undefined4 *param_3,uint param_4){char *local_20;ulong local_10;local_10 = 0x1505;local_20 = param_1;while( true ) {if (*local_20 == 0) break;local_10 = (long)(int)*local_20 + local_10 * 0x21;local_20 = local_20 + 1;}*param_3 = (int)(local_10 % (ulong)param_4);return 1;}