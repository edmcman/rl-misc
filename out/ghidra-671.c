#include <stdio.h>

#include <string.h>

#include <sys/time.h>

# 1 
void func0(long param_1,long param_2,long param_3){undefined4 local_20;undefined4 local_1c;undefined4 local_18;undefined4 local_14;undefined4 local_10;undefined4 local_c;for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {*(undefined4 *)((long)local_20 * 0x20 + param_3 + (long)local_1c * 4) = 0;}}for (local_14 = 0; local_14 < 8; local_14 = local_14 + 4) {for (local_10 = 0; local_10 < 8; local_10 = local_10 + 4) {for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {for (local_20 = local_14; local_20 <= local_14 + 3; local_20 = local_20 + 1) {local_c = *(int *)((long)local_18 * 0x20 + param_3 + (long)local_20 * 4);for (local_1c = local_10; local_1c <= local_10 + 3; local_1c = local_1c + 1) {local_c = local_c + *(int *)((long)local_1c * 0x20 + param_2 + (long)local_20 * 4) **(int *)((long)local_18 * 0x20 + param_1 + (long)local_1c * 4);}*(int *)((long)local_18 * 0x20 + param_3 + (long)local_20 * 4) = local_c;}}}}return;}