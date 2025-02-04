#include <stdlib.h>

#include <stdio.h>

#include <math.h>

#include <pthread.h>

# 1 
int func0(float param_1,long param_2,int param_3){int iVar1;int local_14;int local_10;local_14 = 0;iVar1 = param_3;while (local_10 = iVar1, local_14 < local_10) {iVar1 = (local_10 + local_14) / 2;if (*(float *)(param_2 + (long)iVar1 * 4) <= param_1) {local_14 = iVar1 + 1;iVar1 = local_10;}}return local_14;}