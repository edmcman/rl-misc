#include    <stdlib.h>  /* Include standard library header */

#include    <math.h>    /* Include math library header */

#include    <string.h>  /* Include string function header */

#include    <ctype.h>   /* Include character function header */

#include    <limits.h>  /* define LONG_MIN and LONG_MAX */

# 1 
char * func0(long param_1,int param_2,int *param_3,long param_4){char *pcVar1;int local_34;char *local_18;long local_10;local_10 = param_1;if (param_1 < 0) {local_10 = -param_1;}local_18 = (char *)(param_4 + 0x10);*local_18 = '\0';*param_3 = 0;local_34 = param_2;do {local_18[-1] = (char)local_10 + (char)(local_10 / 10) * -10 + '0';*param_3 = *param_3 + 1;pcVar1 = local_18 + -1;if (local_34 == *param_3) {local_18[-2] = '.';*param_3 = *param_3 + 1;local_34 = 0;pcVar1 = local_18 + -2;}local_18 = pcVar1;local_10 = local_10 / 10;} while ((local_10 != 0) || (local_34 != 0));if (param_1 < 0) {local_18 = local_18 + -1;*local_18 = '-';*param_3 = *param_3 + 1;}return local_18;}