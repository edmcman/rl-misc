#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(long param_1,int param_2,int param_3,int *param_4,int *param_5){int iVar1;int local_18;int local_14;int local_10;iVar1 = (int)((float)param_3 * (float)param_2 * DAT_001000d0);local_18 = 0;local_14 = 0;do {if (0xff < local_14) {LAB_00100084:local_18 = 0;local_10 = 0xff;while( true ) {if (local_10 < 0) {return;}local_18 = local_18 + *(int *)(param_1 + (long)local_10 * 4);if (iVar1 < local_18) break;local_10 = local_10 + -1;}*param_5 = local_10;return;}local_18 = local_18 + *(int *)(param_1 + (long)local_14 * 4);if (iVar1 < local_18) {*param_4 = local_14;goto LAB_00100084;}local_14 = local_14 + 1;} while( true );}