
# 1 
void func0(int param_1,int *param_2,int *param_3,int *param_4){int iVar1;int iVar2;int iVar3;int iVar4;iVar1 = ((param_1 + 0x10bd9) * 4) / 0x23ab1;iVar2 = iVar1 * 0x23ab1;iVar3 = iVar2 + 3;if (iVar3 < 0) {iVar3 = iVar2 + 6;}iVar3 = (param_1 + 0x10bd9) - (iVar3 >> 2);iVar2 = ((iVar3 + 1) * 4000) / 0x164b09;iVar4 = iVar2 * 0x5b5;if (iVar4 < 0) {iVar4 = iVar4 + 3;}iVar4 = (iVar3 - (iVar4 >> 2)) + 0x1f;iVar3 = (iVar4 * 0x50) / 0x98f;*param_2 = iVar4 - (iVar3 * 0x98f) / 0x50;*param_3 = iVar3 + 2 + (iVar3 / 0xb) * -0xc;*param_4 = (iVar1 + -0x31) * 100 + iVar2 + iVar3 / 0xb;return;}