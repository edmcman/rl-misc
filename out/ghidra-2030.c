
# 1 
int func0(long param_1,short param_2,short param_3){int iVar1;int iVar2;iVar1 = (int)*(short *)(param_1 + 2) + ((int)*(short *)(param_1 + 2) + (int)param_2 >> 0xf);iVar2 = (int)param_3 * (int)*(short *)(param_1 + 2) >> 0xf;*(undefined2 *)(param_1 + 2) = 0;*(undefined2 *)(param_1 + 4) = 0;return iVar2 * iVar2 + iVar1 * iVar1;}