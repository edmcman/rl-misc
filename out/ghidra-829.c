#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(uint *param_1){undefined4 local_14;undefined4 local_10;undefined4 local_c;local_10 = *param_1;local_c = local_10 & 0xff;for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {local_10 = (int)local_10 >> 8;local_c = local_c << 8 | local_10 & 0xff;}*param_1 = local_c;return;}