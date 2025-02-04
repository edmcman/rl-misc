







# 1 
void func0(float *param_1){float fVar1;float fVar2;fVar1 = *param_1;fVar2 = param_1[1];*param_1 = param_1[2] + *param_1;param_1[1] = param_1[3] + param_1[1];param_1[2] = fVar1 - param_1[2];param_1[3] = fVar2 - param_1[3];return;}