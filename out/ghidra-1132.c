
# 1 
uint func0(ulong *param_1,long param_2,uint param_3){*param_1 = *(ulong *)(param_2 + (ulong)(((uint)*param_1 ^ param_3) & 0xff) * 8) ^ *param_1 >> 8;param_1[1] = (*param_1 & 0xff) + param_1[1];param_1[1] = param_1[1] * 0x8088405 + 1;param_1[2] = *(ulong *)(param_2 +(ulong)(((uint)param_1[2] ^ (uint)(param_1[1] >> 0x18)) & 0xff) * 8) ^param_1[2] >> 8;return param_3;}