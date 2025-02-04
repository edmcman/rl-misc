






# 1 
void func0(int param_1,long param_2){float fVar1;float fVar2;float fVar3;float fVar4;fVar2 = DAT_00100104;param_1 = param_1 >> 1;if (param_1 == 2) {fVar3 = DAT_00100108 * DAT_00100104;fVar4 = DAT_0010010c * DAT_00100104;fVar1 = *(float *)(param_2 + 4);*(float *)(param_2 + 4) = *(float *)(param_2 + 0xc) * fVar4 + *(float *)(param_2 + 4) * fVar3;*(float *)(param_2 + 0xc) = fVar1 * fVar4 - *(float *)(param_2 + 0xc) * fVar3;}*(float *)(param_2 + (long)param_1 * 4) = *(float *)(param_2 + (long)param_1 * 4) * fVar2;return;}