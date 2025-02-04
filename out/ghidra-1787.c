#include <malloc.h>

#include <stdlib.h>

#include <string.h>

#include <memory.h>

#include <math.h>

# 1 
void func0(long param_1,long param_2,long param_3,float *param_4){long in_FS_OFFSET;float local_40;float local_3c;long local_38;long local_30;float local_1c [3];long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);for (local_38 = 0; local_38 < 3; local_38 = local_38 + 1) {local_1c[local_38] = 0.0;for (local_30 = ((local_38 + 1) * 4 - param_3) + 0x137; local_30 < 0x138;local_30 = local_30 + 2) {local_1c[local_38] =*(float *)(param_1 + (local_30 + local_38 * -4) * 4) * *(float *)(param_1 + local_30 * 4)+ local_1c[local_38];}}local_40 = 0.0;local_3c = 0.0;*param_4 = 0.0;param_4[1] = 0.0;if (_DAT_00100254 < local_1c[0]) {*param_4 = local_1c[1] / local_1c[0];param_4[1] = (local_1c[2] - local_1c[1] * *param_4) / (local_1c[0] - local_1c[1] * *param_4);local_40 = *param_4 - param_4[1] * *param_4;local_3c = param_4[1];}for (local_38 = 0x138 - param_3; local_38 < 0x138; local_38 = local_38 + 1) {*(float *)(param_2 + local_38 * 4) =(*(float *)(param_1 + local_38 * 4) - *(float *)(param_1 + local_38 * 4 + -0x10) * local_40) - *(float *)(param_1 + local_38 * 4 + -0x20) * local_3c;}if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return;}