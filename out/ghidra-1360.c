
# 1 
uint func0(int param_1,long param_2,double *param_3){undefined4 local_1c;undefined4 local_c;local_1c = param_1 - 1;*param_3 = *(double *)(param_2 + (ulong)local_1c * 8);local_c = local_1c;while (local_1c != 0) {local_1c = local_1c - 1;if (*param_3 < *(double *)(param_2 + (ulong)local_1c * 8)) {*param_3 = *(double *)(param_2 + (ulong)local_1c * 8);local_c = local_1c;}}return local_c;}