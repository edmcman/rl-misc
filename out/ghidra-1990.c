#include <stdio.h>

#include <stdlib.h>

#include <assert.h> //assert

# 1 
char * func0(int param_1,char *param_2,int param_3){char *pcVar1;char cVar2;int iVar3;int local_2c;char *local_18;char *local_10;if ((param_3 < 2) || (iVar3 = param_1, pcVar1 = param_2, 0x24 < param_3)) {*param_2 = '\0';}else {do {local_18 = pcVar1;local_2c = iVar3;iVar3 = local_2c / param_3;pcVar1 = local_18 + 1;*local_18 = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz"[(local_2c - iVar3 * param_3) + 0x23];} while (iVar3 != 0);if (local_2c < 0) {*pcVar1 = '-';pcVar1 = local_18 + 2;}local_18 = pcVar1;*local_18 = '\0';local_10 = param_2;while (local_18 = local_18 + -1, local_10 < local_18) {cVar2 = *local_18;*local_18 = *local_10;*local_10 = cVar2;local_10 = local_10 + 1;}}return param_2;}