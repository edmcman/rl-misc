
# 1 
void func0(double *param_1,double *param_2,double *param_3){double dVar1;double dVar2;double dVar3;double dVar4;dVar1 = *param_1;dVar2 = param_2[1];dVar3 = param_1[1];dVar4 = *param_2;*param_3 = *param_2 * *param_1 - param_2[1] * param_1[1];param_3[1] = dVar4 * dVar3 + dVar1 * dVar2;return;}