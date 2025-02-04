
# 1 
void func0(int param_1,int *param_2,int *param_3){undefined4 local_c;*param_2 = -1;*param_3 = 10;for (local_c = param_1; local_c != 0; local_c = local_c / 10) {if (*param_2 < local_c % 10) {*param_2 = local_c % 10;}if (local_c % 10 < *param_3) {*param_3 = local_c % 10;}}return;}