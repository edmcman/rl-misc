#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(long param_1,long param_2,int param_3,int param_4,int param_5,int param_6){int local_1c;int local_18;int local_14;int local_10;int local_c;local_1c = param_6 + -1;local_18 = param_5;local_10 = param_4;for (local_c = param_6; ((param_3 <= local_10 && (param_4 < local_18)) && (0 < local_c));local_c = local_c + -1) {if (*(int *)(param_1 + (long)local_10 * 4) < *(int *)(param_1 + (long)local_18 * 4)) {*(undefined4 *)(param_2 + (long)local_1c * 4) = *(undefined4 *)(param_1 + (long)local_18 * 4);local_18 = local_18 + -1;}else {*(undefined4 *)(param_2 + (long)local_1c * 4) = *(undefined4 *)(param_1 + (long)local_10 * 4);local_10 = local_10 + -1;}local_1c = local_1c + -1;}if (local_c != 0) {if (param_4 < local_10) {for (local_14 = local_18; param_4 < local_14; local_14 = local_14 + -1) {*(undefined4 *)(param_2 + (long)local_1c * 4) =*(undefined4 *)(param_1 + (long)local_14 * 4);local_1c = local_1c + -1;local_c = local_c + -1;if (0 < local_c) {return;}}}else {for (local_14 = local_10; param_3 <= local_14; local_14 = local_14 + -1) {*(undefined4 *)(param_2 + (long)local_1c * 4) =*(undefined4 *)(param_1 + (long)local_14 * 4);local_1c = local_1c + -1;local_c = local_c + -1;if (0 < local_c) {return;}}}}return;}