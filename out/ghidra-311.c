#include <ctype.h>

#include <stdio.h>

#include <string.h>

# 1 
int func0(long param_1,int param_2,int param_3){undefined4 local_28;undefined4 local_10;undefined4 local_c;local_10 = 0;local_c = 0;local_28 = param_3;if (param_3 < 0) {for (local_10 = 0; (local_28 < 0 && (local_10 < param_2)); local_10 = local_10 + 1) {local_28 = local_28 + *(short *)(param_1 + (long)local_10 * 2);local_c = local_c - *(short *)(param_1 + (long)local_10 * 2);*(undefined2 *)(param_1 + (long)local_10 * 2) = 0;}local_10 = local_10 + -1;}if (local_10 < param_2) {*(short *)(param_1 + (long)local_10 * 2) =*(short *)(param_1 + (long)local_10 * 2) + (short)local_28;local_c = local_c + local_28;}return local_c;}