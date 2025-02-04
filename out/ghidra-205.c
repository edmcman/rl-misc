#include <stdio.h>

# 1 
void func0(int *param_1){int iVar1;int iVar2;int *local_28;int *local_20;int *local_18;local_28 = param_1;local_20 = param_1;for (local_18 = param_1 + 1; local_18 < param_1 + 10; local_18 = local_18 + 1) {if (*local_28 < *local_18) {local_28 = local_18;}else if (*local_18 < *local_20) {local_20 = local_18;}}iVar1 = *local_28;iVar2 = *local_20;*local_18 = *param_1;*param_1 = iVar2;*local_18 = param_1[9];param_1[9] = iVar1;return;}