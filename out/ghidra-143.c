




# 1 
int func0(long param_1,int param_2,long param_3,int param_4,float *param_5){undefined4 local_18;undefined4 local_14;undefined4 local_10;undefined4 local_c;local_10 = 0;*param_5 = DAT_0010012c;for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {local_c = 0.0;for (local_14 = 0; local_14 < param_4; local_14 = local_14 + 1) {local_c = (*(float *)(param_3 + (long)local_14 * 4) -*(float *)(param_1 + (long)(local_14 + local_18 * param_4) * 4)) *(*(float *)(param_3 + (long)local_14 * 4) -*(float *)(param_1 + (long)(local_14 + local_18 * param_4) * 4)) + local_c;}if (local_c < *param_5) {*param_5 = local_c;local_10 = local_18;}}return local_10;}