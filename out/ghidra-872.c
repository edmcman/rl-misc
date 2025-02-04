#include <stdio.h>

# 1 
char * func0(char *param_1,char *param_2){char cVar1;char *local_28;char *local_20;if ((param_1 == (char *)0x0) || (local_28 = param_2, local_20 = param_1, param_2 == (char *)0x0)){param_1 = (char *)0x0;}else {do {*local_20 = *local_28;cVar1 = *local_20;local_28 = local_28 + 1;local_20 = local_20 + 1;} while (cVar1 != '\0');}return param_1;}