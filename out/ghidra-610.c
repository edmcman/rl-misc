#include <malloc.h>

#include <stdlib.h>

#include <string.h>

#include <memory.h>

#include <math.h>

# 1 
void func0(long param_1,long param_2,undefined8 *param_3,long param_4){long lVar1;bool bVar2;long lVar3;long lVar4;long lVar5;long local_30;long local_28;long local_20;param_1 = param_1 + -8;lVar3 = *(long *)(param_4 + 0x18);if (lVar3 < 0xb4) {lVar3 = 0xb4;}lVar3 = lVar3 + 1;for (local_20 = param_2; (0 < local_20 && (0x21c < *(long *)(param_1 + local_20 * 8)));local_20 = local_20 + -1) {}lVar4 = local_20 + 1;if ((lVar4 < 2) || (*(long *)(param_1 + lVar4 * 8 + -8) < lVar3)) {lVar3 = 0x132;if (0x131 < *(long *)(param_4 + 0x18)) {lVar3 = *(long *)(param_4 + 0x18);}*(long *)(param_4 + 0x20) = lVar3 + 1;*(long *)(param_4 + 0x28) = *(long *)(param_4 + 0x20) + 0x9b;*param_3 = 0;}else {for (local_28 = local_20; (0 < local_28 && (lVar3 <= *(long *)(param_1 + local_28 * 8)));local_28 = local_28 + -1) {}lVar1 = local_28 + 1;bVar2 = false;for (local_30 = local_28 + 2; local_30 < lVar4; local_30 = local_30 + 1) {if (0x59 < *(long *)(param_1 + local_30 * 8) - *(long *)(param_1 + lVar1 * 8)) {bVar2 = true;break;}}if (!bVar2) {lVar5 = 0x10f;if (0x10e < lVar3) {lVar5 = lVar3;}if (lVar5 + 0x59 < *(long *)(param_1 + lVar1 * 8)) {*(long *)(param_4 + 0x28) = *(long *)(param_1 + lVar1 * 8) + -1;lVar4 = *(long *)(param_4 + 0x28) + -0x9b;if (lVar4 <= lVar3) {lVar4 = lVar3;}*(long *)(param_4 + 0x20) = lVar4;*param_3 = 2;return;}}*(undefined8 *)(param_4 + 0x20) = *(undefined8 *)(param_1 + lVar1 * 8);local_28 = lVar1;do {local_28 = local_28 + 1;if ((lVar4 <= local_28) ||(*(long *)(param_4 + 0x20) + 0x9c < *(long *)(param_1 + local_28 * 8))) {if (*(long *)(param_4 + 0x20) + 0x9a < 0x21c) {lVar3 = *(long *)(param_4 + 0x20) + 0x9b;}else {lVar3 = 0x21c;}*(long *)(param_4 + 0x28) = lVar3;*param_3 = 1;return;}} while (*(long *)(param_1 + local_28 * 8) <= *(long *)(param_4 + 0x20) + 0x59);*(long *)(param_4 + 0x28) = *(long *)(param_1 + local_28 * 8) + -1;*param_3 = 3;}return;}