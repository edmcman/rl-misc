#include <math.h>

# 1 
void func0(long param_1){undefined4 local_c;for (local_c = 1; local_c < 3; local_c = local_c + 1) {if ((*(int *)(param_1 + (long)local_c * 4) < 0x2c) ||(0x6b < *(int *)(param_1 + (long)local_c * 4))) {if ((0x6b < *(int *)(param_1 + (long)local_c * 4)) &&(*(int *)(param_1 + (long)local_c * 4) < 0x80)) {*(int *)(param_1 + (long)local_c * 4) = *(int *)(param_1 + (long)local_c * 4) + 0x80;}}else {*(int *)(param_1 + (long)local_c * 4) = *(int *)(param_1 + (long)local_c * 4) + 0x40;}}return;}