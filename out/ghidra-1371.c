
# 1 
undefined4 func0(float param_1,long param_2,long param_3,long param_4,undefined4 *param_5){undefined4 local_c;for (local_c = 0; local_c < param_3; local_c = local_c + 1) {if (*(float *)(param_2 + (long)local_c * 4) == param_1) {*(undefined4 *)(param_4 + (long)local_c * 4) = 0xffffffff;}}return *param_5;}