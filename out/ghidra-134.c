
# 1 
int func0(int *param_1,int *param_2){int iVar1;int iVar2;iVar1 = *param_1;iVar2 = *param_2;*param_1 = iVar2;*param_2 = iVar1;return iVar2 + iVar1;}