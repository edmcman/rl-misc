#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#include <limits.h>

# 1 
int func0(long param_1,long param_2,int param_3){undefined4 local_14;undefined4 local_10;undefined4 local_c;for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {*(undefined4 *)(param_1 + (long)local_14 * 4) = 0xffffffff;}local_14 = 4;local_10 = -1;local_c = 0;while (local_c < 4) {local_10 = local_10 + 1;if (local_10 < param_3) {if (*(char *)(param_2 + local_10) != ' ') {*(int *)(param_1 + (long)local_14 * 4) = (int)*(char *)(param_2 + local_10);local_14 = local_14 + 1;local_c = local_c + 1;}}else {*(undefined4 *)(param_1 + (long)local_14 * 4) = 0xffffffff;local_14 = local_14 + 1;local_c = local_c + 1;local_10 = param_3;}}return local_10;}