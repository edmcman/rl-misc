#include <math.h> /* for log10() and floor() */

#include <stdio.h> /* for printf() */

# 1 
char * func0(ulong param_1,int param_2,long param_3,long *param_4){char *pcVar1;ulong local_30;char *local_20;pcVar1 = (char *)(param_3 + 0x40);*pcVar1 = '\0';local_30 = param_1;local_20 = pcVar1;if (param_2 == 0) {for (; local_30 != 0; local_30 = (local_30 - 1) / 0x1a) {local_20 = local_20 + -1;*local_20 = "abcdefghijklmnopqrstuvwxyz"[(local_30 - 1) % 0x1a];}}else {for (; local_30 != 0; local_30 = (local_30 - 1) / 0x1a) {local_20[-1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[(local_30 - 1) % 0x1a];local_20 = local_20 + -1;}}*param_4 = (long)pcVar1 - (long)local_20;return local_20;}