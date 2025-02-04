
# 1 
void func0(double *param_1,double *param_2,double *param_3,ulong *param_4){*param_3 = param_1[1] - param_2[1];param_3[1] = *param_2 - *param_1;*param_4 = (ulong)(param_1[1] * param_3[1] + *param_3 * *param_1) ^ DAT_001000b0;return;}