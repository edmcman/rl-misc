#include <stdio.h>

#include <stdlib.h>

# 1 
int func0(uint param_1,long param_2){undefined4 local_1c;undefined4 local_14;undefined4 local_10;undefined4 local_c;local_10 = 0;for (local_14 = 1; local_14 <= param_1; local_14 = local_14 << 1) {local_10 = local_10 + 1;}local_1c = param_1;for (local_c = local_10 + -1; local_14 = local_14 >> 1, -1 < local_c; local_c = local_c + -1) {if ((int)(local_1c - local_14) < 0) {*(undefined4 *)(param_2 + (long)local_c * 4) = 0;}else {local_1c = local_1c - local_14;*(undefined4 *)(param_2 + (long)local_c * 4) = 1;}}return local_10 + -1;}