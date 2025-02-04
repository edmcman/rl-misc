#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <unistd.h>

#include <stdint.h>

#include <string.h>

# 1 
int func0(float param_1,long param_2){int iVar1;int local_14;int local_10;local_14 = 0;local_10 = 0x78;while( true ) {if (local_10 < local_14) {return local_14;}iVar1 = local_14 + (local_10 - local_14) / 2;if (iVar1 == local_14) break;if (*(float *)(param_2 + (long)iVar1 * 4) == param_1) {return iVar1;}if (param_1 <= *(float *)(param_2 + (long)iVar1 * 4)) {local_10 = iVar1 + -1;}else {local_14 = iVar1 + 1;}}return iVar1 + 1;}