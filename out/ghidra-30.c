
# 1 
void func0(float param_1,float param_2,float param_3,float param_4,float *param_5){float fVar1;float fVar2;if (0.0 < param_4) {fVar1 = (DAT_00100128 - param_5[3]) * param_4 + param_5[3];fVar2 = param_5[3] / fVar1;*param_5 = (DAT_00100128 - fVar2) * param_1 + *param_5 * fVar2;param_5[1] = (DAT_00100128 - fVar2) * param_2 + param_5[1] * fVar2;param_5[2] = (DAT_00100128 - fVar2) * param_3 + param_5[2] * fVar2;param_5[3] = fVar1;}return;}