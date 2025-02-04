#include <stdbool.h>

# 1 
int func0(long param_1,ulong param_2,int *param_3){undefined4 local_c;local_c = 0;*param_3 = 0;for (; ((ulong)(param_1 + local_c) < param_2 && (*(char *)(param_1 + local_c) < '\0'));local_c = local_c + 1) {*param_3 = *param_3 +(((int)*(char *)(param_1 + local_c) & 0x7fU) <<((char)(local_c << 3) - (char)local_c & 0x1fU));}if (param_2 == param_1 + local_c) {local_c = 0;}else {*param_3 = *param_3 +(((int)*(char *)(param_1 + local_c) & 0x7fU) <<((char)(local_c << 3) - (char)local_c & 0x1fU));local_c = local_c + 1;}return local_c;}