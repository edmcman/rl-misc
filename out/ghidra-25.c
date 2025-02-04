
# 1 
void func0(double *param_1,int param_2,double *param_3){int local_c;*param_3 = *param_1;for (local_c = 1; local_c < param_2; local_c = local_c + 1) {if (param_1[local_c] < *param_3) {*param_3 = param_1[local_c];}}return;}