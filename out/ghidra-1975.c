#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(int param_1,long param_2,long param_3,int *param_4){long lVar1;undefined4 local_c;for (local_c = 0; local_c < 0x1a; local_c = local_c + 1) {if ((*(int *)(param_3 + (long)local_c * 4) != 0) &&(*(int *)((long)param_1 * 0x68 + param_2 + (long)local_c * 4) != 0)) {lVar1 = param_2 + (long)param_1 * 0x68;*(int *)(lVar1 + (long)local_c * 4) = *(int *)(lVar1 + (long)local_c * 4) + -1;func0(local_c,param_2,param_3,param_4);}}*param_4 = *param_4 + 1;return;}