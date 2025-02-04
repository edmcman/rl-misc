#include <stdio.h>

# 1 
undefined8 func0(float *param_1){undefined8 uVar1;int local_10;if ((int)(param_1[1] - *param_1) == 0) {uVar1 = 0;}else {for (local_10 = 0; local_10 < 9; local_10 = local_10 + 1) {if ((float)(int)(param_1[1] - *param_1) + param_1[local_10] != param_1[(long)local_10 + 1]) {return 0;}}uVar1 = 1;}return uVar1;}