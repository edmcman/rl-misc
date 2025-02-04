#include <stdarg.h>

# 1 
char * func0(long param_1,long param_2){char *pcVar1;int iVar2;char cVar3;int local_18;char *local_10;*(undefined *)(param_1 + 0x17) = 0;local_18 = (int)param_2;pcVar1 = (char *)(param_1 + 0x16);if (local_18 < 0) {local_18 = -local_18;}do {local_10 = pcVar1;iVar2 = local_18 / 10;cVar3 = (char)local_18;local_18 = local_18 / 10;pcVar1 = local_10 + -1;*local_10 = cVar3 + (char)iVar2 * -10 + '0';} while (local_18 != 0);if (param_2 < 0) {*pcVar1 = '-';pcVar1 = local_10 + -2;}local_10 = pcVar1;return local_10 + 1;}