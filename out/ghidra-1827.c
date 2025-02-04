
















# 1 
int func0(int param_1,char *param_2,int param_3){ssize_t sVar1;uint local_14;int local_10;if (param_3 < 1) {local_10 = -1;}else {do {sVar1 = read(param_1,param_2,1);if ((int)sVar1 < 1) {return -1;}} while (*param_2 != '\x04');for (local_10 = 1; local_10 < 3; local_10 = local_10 + (int)sVar1) {sVar1 = read(param_1,param_2 + local_10,(ulong)(3 - local_10));if ((int)sVar1 < 1) {return -1;}}if ((int)(uint)(byte)param_2[2] < param_3 + -3) {local_14 = (uint)(byte)param_2[2];}else {local_14 = param_3 - 3;}for (; local_10 + -2 <= (int)local_14; local_10 = local_10 + (int)sVar1) {sVar1 = read(param_1,param_2 + local_10,(ulong)(local_14 - (local_10 + -3)));if ((int)sVar1 < 1) {return -1;}}}return local_10;}