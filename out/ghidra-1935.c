#include <math.h> /* for log10() and floor() */

#include <stdio.h> /* for printf() */

# 1 
char * func0(ulong param_1,long param_2,long *param_3){char *pcVar1;ulong uVar2;ulong local_30;char *local_20;pcVar1 = (char *)(param_2 + 0x40);*pcVar1 = '\0';local_30 = param_1;local_20 = pcVar1;do {uVar2 = local_30 / 10;local_20 = local_20 + -1;*local_20 = (char)local_30 + (char)uVar2 * -10 + '0';local_30 = uVar2;} while (uVar2 != 0);*param_3 = (long)pcVar1 - (long)local_20;return local_20;}