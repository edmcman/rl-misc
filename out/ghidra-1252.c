#include <math.h>

# 1 
void func0(long param_1,long param_2,long param_3){undefined4 local_14;undefined4 local_10;undefined4 local_c;for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {*(undefined4 *)(param_3 + (long)(local_14 + local_10 * 4) * 4) = 0;for (local_c = 0; local_c < 4; local_c = local_c + 1) {*(float *)(param_3 + (long)(local_14 + local_10 * 4) * 4) =*(float *)(param_2 + (long)(local_14 + local_c * 4) * 4) **(float *)(param_1 + (long)(local_c + local_10 * 4) * 4) +*(float *)(param_3 + (long)(local_14 + local_10 * 4) * 4);}}}return;}