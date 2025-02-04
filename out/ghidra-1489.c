#include <math.h> /* for log10() and floor() */

#include <stdio.h> /* for printf() */

# 1 
char * func0(long param_1,int param_2,int param_3,long param_4,long *param_5){char *pcVar1;long lVar2;long local_30;char *local_20;long local_18;pcVar1 = (char *)(param_4 + 0x40);*pcVar1 = '\0';local_30 = param_1;local_20 = pcVar1;if (param_3 == 0) {do {local_18 = local_30;lVar2 = local_30 / (long)param_2;local_20 = local_20 + -1;*local_20 = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz"[(local_30 - param_2 * lVar2) + 0x23];local_30 = lVar2;} while (lVar2 != 0);}else {do {local_18 = local_30;lVar2 = local_30 / (long)param_2;local_20 = local_20 + -1;*local_20 = "ZYXWVUTSRQPONMLKJIHGFEDCBA9876543210123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[(local_30 - param_2 * lVar2) + 0x23];local_30 = lVar2;} while (lVar2 != 0);}if (local_18 < 0) {local_20 = local_20 + -1;*local_20 = '-';}*param_5 = (long)pcVar1 - (long)local_20;return local_20;}