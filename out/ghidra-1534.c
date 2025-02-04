
# 1 
uint func0(uint *param_1,long param_2,uint param_3){*param_1 = *(uint *)(param_2 + (ulong)((param_3 ^ *param_1) & 0xff) * 4) ^ *param_1 >> 8;param_1[1] = (*param_1 & 0xff) + param_1[1];param_1[1] = param_1[1] * 0x8088405 + 1;param_1[2] = *(uint *)(param_2 + (ulong)((param_1[2] ^ param_1[1] >> 0x18) & 0xff) * 4) ^param_1[2] >> 8;return param_3;}