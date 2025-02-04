
# 1 
int func0(int *param_1,int param_2){int iVar1;LOCK();iVar1 = *param_1;*param_1 = *param_1 + param_2;UNLOCK();return iVar1;}