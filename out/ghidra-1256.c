#include <sys/cdefs.h>

#include <string.h>

#include <stdlib.h>

#include <ctype.h>

# 1 
char func0(int *param_1,int *param_2){char cVar1;cVar1 = *param_1 < 0;if ((bool)cVar1) {*param_1 = 0;}if (*param_2 < 0) {*param_2 = 0;cVar1 = cVar1 + '\x01';}if (0x42 < *param_1) {*param_1 = 0x42;cVar1 = cVar1 + '\x01';}if (0x10 < *param_2) {*param_2 = 0x10;cVar1 = cVar1 + '\x01';}return cVar1;}