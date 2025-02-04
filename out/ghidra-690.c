#include <stdlib.h>

# 1 
undefined4 func0(undefined4 param_1,long param_2,int param_3,int param_4,int param_5,int param_6){int local_20;int local_1c;local_1c = param_5;if (param_5 < 0) {local_1c = 0;}local_20 = param_6;if (param_6 < 0) {local_20 = 0;}if ((local_1c < param_3) && (local_20 < param_4)) {param_1 = *(undefined4 *)(param_2 + (long)(local_1c + local_20 * param_3) * 4);}return param_1;}