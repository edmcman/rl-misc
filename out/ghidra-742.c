#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include <assert.h>

#include <ctype.h>

# 1 
int func0(char *param_1,long param_2){char cVar1;int iVar2;int iVar3;long local_28;char *local_20;int local_14;char *local_10;local_14 = 1;local_28 = param_2;local_20 = param_1;if (param_2 < 0) {local_14 = 2;local_20 = param_1 + 1;*param_1 = '-';local_28 = -param_2;}local_10 = local_20;for (; 9 < local_28; local_28 = local_28 / 10) {*local_10 = (char)local_28 + (char)(local_28 / 10) * -10 + '0';local_10 = local_10 + 1;}*local_10 = (char)local_28 + '0';local_10[1] = '\0';iVar3 = (int)local_20;iVar2 = (int)local_10;for (; local_20 < local_10; local_20 = local_20 + 1) {cVar1 = *local_10;*local_10 = *local_20;*local_20 = cVar1;local_10 = local_10 + -1;}return local_14 + (iVar2 - iVar3);}