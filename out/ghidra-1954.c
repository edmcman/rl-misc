#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <stdarg.h>

#include <malloc.h>

#include <alloca.h>

# 1 
void func0(long param_1,int *param_2){int iVar1;iVar1 = *param_2;*param_2 = iVar1 + 1;if ((((*(char *)(param_1 + iVar1) < '\0') &&(((int)*(char *)(param_1 + *param_2) & 0xc0U) == 0x80)) &&(*param_2 = *param_2 + 1, ((int)*(char *)(param_1 + *param_2) & 0xc0U) == 0x80)) &&(*param_2 = *param_2 + 1, ((int)*(char *)(param_1 + *param_2) & 0xc0U) == 0x80)) {*param_2 = *param_2 + 1;}return;}