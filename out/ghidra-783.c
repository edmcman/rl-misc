#include <stddef.h>

# 1 
void func0(uint *param_1,int *param_2){int local_1c;int local_18;uint local_14;uint local_10;local_1c = 0x20;local_14 = *param_1;local_10 = param_1[1];local_18 = -0x3910c8e0;while (local_1c != 0) {local_10 = local_10 -(param_2[3] + (local_14 >> 5) ^ local_14 * 0x10 + param_2[2] ^ local_18 + local_14);local_14 = local_14 -(param_2[1] + (local_10 >> 5) ^ local_10 * 0x10 + *param_2 ^ local_18 + local_10);local_18 = local_18 + 0x61c88647;local_1c = local_1c + -1;}*param_1 = local_14;param_1[1] = local_10;return;}