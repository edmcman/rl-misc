#include <assert.h>

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(char *param_1){char cVar1;char *local_20;char *local_10;local_10 = param_1;if (param_1 != (char *)0x0) {for (; local_20 = param_1, *local_10 != '\0'; local_10 = local_10 + 1) {}for (; local_10 = local_10 + -1, local_20 < local_10; local_20 = local_20 + 1) {cVar1 = *local_20;*local_20 = *local_10;*local_10 = cVar1;}}return;}