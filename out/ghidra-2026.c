#include <assert.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#include <stdio.h>

# 1 
char * func0(char *param_1,char *param_2,char param_3){char *pcVar1;char *local_10;if ((param_1 == (char *)0x0) || (local_10 = param_1, param_2 == (char *)0x0)) {param_1 = (char *)0x0;}else {for (; *local_10 != '\0'; local_10 = local_10 + 1) {pcVar1 = strchr(param_2,(int)*local_10);if (pcVar1 != (char *)0x0) {*local_10 = param_3;}}}return param_1;}