#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <omp.h>

#include <time.h>

# 1 
undefined4 func0(long param_1,int param_2,int param_3){int iVar1;int iVar2;char cVar3;undefined4 local_1c;undefined4 local_18;cVar3 = '\0';for (local_1c = 1; local_1c < param_2; local_1c = local_1c << 1) {iVar2 = local_1c * 2;if (param_3 % iVar2 == 0) {*(int *)(param_1 + (long)(iVar2 + param_3) * 4 + -4) =*(int *)(param_1 + (long)(local_1c + param_3) * 4 + -4) +*(int *)(param_1 + (long)(iVar2 + param_3) * 4 + -4);}cVar3 = cVar3 + '\x01';}if (param_3 == 0) {*(undefined4 *)(param_1 + (long)param_2 * 4 + -4) = 0;}for (local_18 = 1 << (cVar3 - 1U & 0x1f); 0 < local_18; local_18 = local_18 >> 1) {iVar2 = local_18 * 2;if (param_3 % iVar2 == 0) {iVar1 = *(int *)(param_1 + (long)(local_18 + param_3) * 4 + -4);*(undefined4 *)(param_1 + (long)(local_18 + param_3) * 4 + -4) =*(undefined4 *)(param_1 + (long)(iVar2 + param_3) * 4 + -4);*(int *)(param_1 + (long)(iVar2 + param_3) * 4 + -4) =iVar1 + *(int *)(param_1 + (long)(local_18 + param_3) * 4 + -4);}}return *(undefined4 *)(param_1 + (long)param_3 * 4);}