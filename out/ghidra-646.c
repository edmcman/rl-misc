
# 1 
int func0(char param_1,char param_2,uint *param_3){undefined4 local_14;local_14 = (int)param_1 - 0x30U ^ (int)param_2 - 0x30U;if (*param_3 == 1) {local_14 = local_14 ^ *param_3;*param_3 = *param_3 & local_14;}else {*param_3 = (int)param_1 - 0x30U & (int)param_2 - 0x30U;}return local_14 + 0x30;}