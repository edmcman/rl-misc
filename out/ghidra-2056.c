#include <math.h>

#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(long param_1,long param_2){undefined4 local_10;undefined4 local_c;for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {*(undefined4 *)(param_1 + (long)local_10 * 0x20) = 0;}for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {for (local_c = 0; local_c < 3; local_c = local_c + 1) {*(undefined4 *)((long)local_c * 0x20 + param_1 + (long)(local_10 + 1) * 4) =*(undefined4 *)((long)local_c * 0xc + param_2 + (long)local_10 * 4);}}for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {for (local_c = 0; local_c < 3; local_c = local_c + 1) {*(int *)(param_1 + (long)local_c * 0x20 + (long)(local_10 + 4) * 4) =*(int *)((long)local_c * 0xc + param_2 + (long)((local_10 + 1) % 3) * 4) +*(int *)((long)local_c * 0xc + param_2 + (long)((local_10 + 2) % 3) * 4);}}for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {*(int *)(param_1 + (long)local_10 * 0x20 + 0x1c) =*(int *)(param_2 + (long)local_10 * 0xc + 8) +*(int *)(param_2 + (long)local_10 * 0xc) + *(int *)(param_2 + (long)local_10 * 0xc + 4);}return;}