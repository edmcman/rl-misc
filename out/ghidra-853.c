#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <stdarg.h>

#include <malloc.h>

#include <alloca.h>

# 1 
uint func0(long param_1,uint *param_2){uint uVar1;*param_2 = *param_2 - 1;uVar1 = (int)*(char *)(param_1 + (int)*param_2) & 0xc0;if (uVar1 == 0x80) {*param_2 = *param_2 - 1;uVar1 = (int)*(char *)(param_1 + (int)*param_2) & 0xc0;if (uVar1 == 0x80) {*param_2 = *param_2 - 1;uVar1 = (int)*(char *)(param_1 + (int)*param_2) & 0xc0;if (uVar1 == 0x80) {*param_2 = *param_2 - 1;uVar1 = *param_2;}}}return uVar1;}