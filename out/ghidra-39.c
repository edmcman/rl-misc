
# 1 
undefined8 func0(long param_1,double *param_2,float *param_3){int iVar1;float fVar2;double dVar3;undefined8 uVar4;fVar2 = param_3[1] * ((float)param_1 / *param_3);if (0.0 <= fVar2) {if (fVar2 < param_3[1]) {iVar1 = (int)fVar2;dVar3 = (param_2[iVar1 + 1] - param_2[iVar1]) * (double)(fVar2 - (float)iVar1) +param_2[iVar1];uVar4 = CONCAT44((int)((ulong)dVar3 >> 0x20),(float)dVar3);}else {uVar4 = CONCAT44((int)((ulong)param_2[(int)param_3[1]] >> 0x20),(float)param_2[(int)param_3[1]]);}}else {uVar4 = CONCAT44((int)((ulong)*param_2 >> 0x20),(float)*param_2);}return uVar4;}