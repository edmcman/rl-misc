#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(long param_1,long param_2,ulong param_3){long lVar1;undefined8 local_18;for (local_18 = 0; (local_18 < param_3 && (*(char *)(local_18 + param_2) != '\0'));local_18 = local_18 + 1) {lVar1 = (long)(*(char *)(local_18 + param_2) + -0x61);*(int *)(param_1 + lVar1 * 4) = *(int *)(param_1 + lVar1 * 4) + 1;}return;}