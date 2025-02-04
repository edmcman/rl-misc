
# 1 
int func0(uint param_1,int *param_2){uint uVar1;undefined4 local_c;uVar1 = param_1;if ((int)param_1 < 0) {uVar1 = param_1 + 0xffff;}local_c = (int)uVar1 >> 0x10;if (((int)param_1 < 0) && ((param_1 & 0xffff) != 0)) {local_c = local_c + -1;}*param_2 = local_c;return (int)param_1 % 0x10000;}