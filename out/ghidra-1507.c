
# 1 
int func0(int *param_1){int iVar1;LOCK();iVar1 = *param_1;*param_1 = *param_1 + -1;UNLOCK();return iVar1 + -1;}