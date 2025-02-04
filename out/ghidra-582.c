
# 1 
void func0(long *param_1,long *param_2,double *param_3){double dVar1;long lVar2;dVar1 = *param_3;*param_2 = *param_2 + (long)dVar1;*param_3 = *param_3 - (double)(long)dVar1;lVar2 = *param_2;*param_1 = *param_1 + lVar2 / 0x15180;*param_2 = *param_2 + (lVar2 / 0x15180) * -0x15180;return;}