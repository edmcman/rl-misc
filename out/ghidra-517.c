
# 1 
long func0(long *param_1){long lVar1;LOCK();lVar1 = *param_1;*param_1 = *param_1 + 1;UNLOCK();return lVar1 + 1;}