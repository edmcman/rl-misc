
# 1 
void func0(float *param_1){float fVar1;float fVar2;float fVar3;float fVar4;int local_2c;for (local_2c = 0; local_2c < 8; local_2c = local_2c + 4) {fVar3 = param_1[local_2c] + param_1[(long)local_2c + 1];fVar4 = param_1[local_2c] - param_1[(long)local_2c + 1];fVar1 = param_1[(long)local_2c + 2] + param_1[(long)local_2c + 3];fVar2 = param_1[(long)local_2c + 2] - param_1[(long)local_2c + 3];param_1[local_2c] = fVar3 + fVar1;param_1[(long)local_2c + 2] = fVar3 - fVar1;param_1[(long)local_2c + 1] = fVar4 + fVar2;param_1[(long)local_2c + 3] = fVar4 - fVar2;}fVar3 = *param_1;*param_1 = param_1[4] + fVar3;param_1[4] = fVar3 - param_1[4];fVar3 = param_1[2];param_1[2] = param_1[6] + fVar3;param_1[6] = fVar3 - param_1[6];fVar3 = DAT_001002e4 * (param_1[5] + param_1[7]);fVar4 = DAT_001002e4 * (param_1[5] - param_1[7]);param_1[5] = param_1[1] - fVar3;param_1[1] = param_1[1] + fVar3;param_1[7] = param_1[3] - fVar4;param_1[3] = param_1[3] + fVar4;return;}