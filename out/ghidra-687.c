#include <stdio.h>

#include <string.h>

# 1 
undefined8 func0(long param_1,int *param_2){int local_c;local_c = 0;*param_2 = 0;while( true ) {if (*(char *)(param_1 + local_c) == '\0') {return 0;}if (('9' < *(char *)(param_1 + local_c)) || (*(char *)(param_1 + local_c) < '0')) break;*param_2 = *param_2 * 10;*param_2 = *(char *)(param_1 + local_c) + -0x30 + *param_2;local_c = local_c + 1;}return 1;}