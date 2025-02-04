#include <math.h> /* for log10() and floor() */

#include <stdio.h> /* for printf() */

# 1 
char * func0(char *param_1,long *param_2){char cVar1;char *local_20;int local_c;cVar1 = *param_1;*param_2 = 0;local_20 = param_1;while (local_c = (int)cVar1, local_c - 0x30U < 10) {*param_2 = *param_2 * 2 + *param_2 * 8 + (long)(local_c + -0x30);local_20 = local_20 + 1;cVar1 = *local_20;}return local_20;}