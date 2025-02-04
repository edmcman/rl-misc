#include <stdio.h>

#include <stdlib.h>

#include <assert.h>

#include <time.h>

#include <string.h>

# 1 
undefined8 func0(long param_1,long param_2,int param_3,int param_4){int iVar1;int local_18;int local_14;for (local_18 = 0; local_18 < param_3; local_18 = local_18 + 1) {iVar1 = *(int *)(param_1 + (long)local_18 * 4);for (local_14 = 0; local_14 < param_4; local_14 = local_14 + 1) {if (*(int *)(param_2 + (long)local_14 * 4) == iVar1) {*(undefined4 *)(param_2 + (long)local_14 * 4) = 0;}}}local_18 = 0;while( true ) {if (param_4 <= local_18) {return 1;}if (*(int *)(param_2 + (long)local_18 * 4) != 0) break;local_18 = local_18 + 1;}return 0;}