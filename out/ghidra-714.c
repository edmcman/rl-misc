#include <math.h>

#include <string.h>

# 1 
int func0(long param_1){float local_14;int local_10;int local_c;local_14 = 0.0;local_10 = -1;for (local_c = 0; local_c < 4; local_c = local_c + 1) {if (local_14 < *(float *)(param_1 + (long)local_c * 4)) {local_14 = *(float *)(param_1 + (long)local_c * 4);local_10 = local_c;}}if (local_10 < 0) {local_10 = -1;}else {for (local_c = 0; local_c < 4; local_c = local_c + 1) {if ((local_10 != local_c) &&((float)(DAT_001000e0 * (double)local_14) < *(float *)(param_1 + (long)local_c * 4))) {return -1;}}}return local_10;}