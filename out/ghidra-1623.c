#include <stdio.h>

#include <string.h>

#include <ctype.h>

# 1 
undefined8 func0(long param_1,long param_2,long param_3,long param_4,int param_5,int param_6,float *param_7){undefined4 local_14;undefined4 local_10;undefined4 local_c;local_10 = 0.0;local_14 = 0.0;for (local_c = 0; local_c < param_5; local_c = local_c + 1) {local_10 = DAT_00100130 + local_10;if (*(int *)(param_3 + (long)local_c * 4) == *(int *)(param_1 + (long)local_c * 4)) {local_14 = DAT_00100130 + local_14;}}for (local_c = 0; local_c < param_6; local_c = local_c + 1) {local_10 = DAT_00100130 + local_10;if (*(int *)(param_2 + (long)local_c * 4) == *(int *)(param_4 + (long)local_c * 4)) {local_14 = DAT_00100130 + local_14;}}*param_7 = local_14 / local_10;return 1;}