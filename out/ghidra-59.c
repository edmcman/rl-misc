#include <stdio.h>

#include <ctype.h>

#include <stdlib.h>

#include <stdbool.h>

# 1 
void func0(long param_1,int *param_2){int local_10;int local_c;*param_2 = 0;for (local_c = 0; local_c < 5; local_c = local_c + 1) {local_10 = 0;while ((local_10 < local_c &&(*(int *)(param_1 + (long)local_c * 8 + 4) != *(int *)(param_1 + (long)local_10 * 8 + 4)))) {local_10 = local_10 + 1;}if (local_c == local_10) {*param_2 = *param_2 + 1;}}return;}