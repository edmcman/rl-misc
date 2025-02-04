





# 1 
ssize_t func0(int param_1,void *param_2,uint param_3,uint param_4){ssize_t sVar1;if ((int)param_3 < 0) {sVar1 = 0xffffffff;}else {lseek(param_1,(ulong)param_3,0);sVar1 = read(param_1,param_2,(ulong)param_4);}return sVar1;}