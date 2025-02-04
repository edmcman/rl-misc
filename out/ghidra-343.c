#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(long param_1,undefined8 param_2,int param_3,int param_4){undefined4 uVar1;uVar1 = *(undefined4 *)(param_1 + (long)param_3 * 4);*(undefined4 *)(param_1 + (long)param_3 * 4) = *(undefined4 *)(param_1 + (long)param_4 * 4);*(undefined4 *)((long)param_4 * 4 + param_1) = uVar1;return;}