#include <assert.h>

# 1 
void func0(long *param_1){long lVar1;long lVar2;long local_28;long local_20;local_28 = *param_1 / param_1[1];local_20 = *param_1 % param_1[1];if (local_20 < 0) {if (0 < param_1[1]) {local_20 = local_20 + param_1[1];local_28 = local_28 + -1;}if (param_1[1] < 0) {local_20 = local_20 - param_1[1];local_28 = local_28 + 1;}}lVar1 = param_1[2];lVar2 = param_1[4];*param_1 = param_1[1];param_1[1] = local_20;param_1[2] = param_1[3];param_1[3] = lVar1 - param_1[3] * local_28;param_1[4] = param_1[5];param_1[5] = lVar2 - param_1[5] * local_28;return;}