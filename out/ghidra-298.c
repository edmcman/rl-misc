#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <time.h>

#include <sys/timeb.h>

# 1 
int func0(float param_1,long param_2,int param_3){int iVar1;int iVar2;int local_18;int local_14;local_18 = 1;iVar1 = local_18;local_14 = param_3;while (local_18 = iVar1, 1 < local_14 - local_18) {iVar2 = (local_18 + local_14) / 2;iVar1 = iVar2;if (param_1 <= *(float *)(param_2 + (long)iVar2 * 4)) {iVar1 = local_18;local_14 = iVar2;}}return local_18;}