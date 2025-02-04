#include <stdio.h>

#include <stdlib.h>

# 1 
undefined8 func0(char *param_1,char *param_2){undefined8 uVar1;char *local_18;char *local_10;if ((param_1 == (char *)0x0) || (local_18 = param_2, local_10 = param_1, param_2 == (char *)0x0)){uVar1 = 0;}else {while (*local_18 != '\0') {*local_10 = *local_18;local_18 = local_18 + 1;local_10 = local_10 + 1;}*local_10 = '\0';uVar1 = 1;}return uVar1;}