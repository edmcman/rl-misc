#include <stdarg.h>

#include <ctype.h>

#include <malloc.h>

# 1 
void func0(int *param_1,int *param_2){int iVar1;undefined4 local_14;undefined4 local_10;local_14 = *param_2;if ((*param_1 != 0) && (local_14 != 0)) {for (local_10 = *param_1 % local_14; iVar1 = local_14, local_10 != 0;local_10 = iVar1 % local_10) {local_14 = local_10;}*param_1 = *param_1 / local_14;*param_2 = *param_2 / local_14;}return;}