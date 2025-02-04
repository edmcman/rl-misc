#include <stdint.h>

#include <ctype.h>

#include <string.h>

#include <stdbool.h>

# 1 
char func0(char *param_1,uint param_2){char cVar1;char *local_20;uint local_10;cVar1 = 99 < param_2;local_20 = param_1;local_10 = param_2;if ((bool)cVar1) {local_20 = param_1 + 1;*param_1 = (char)(param_2 / 100) + '0';local_10 = param_2 % 100;}if (9 < param_2) {*local_20 = (char)(local_10 / 10) + '0';local_10 = local_10 % 10;cVar1 = cVar1 + '\x01';local_20 = local_20 + 1;}*local_20 = (char)local_10 + '0';return cVar1 + '\x01';}