#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(uint *param_1){undefined4 local_10;undefined4 local_c;local_10 = *param_1;local_c = 1;while ((local_10 & local_c) != 0) {local_10 = local_10 ^ local_c;local_c = local_c << 1;}*param_1 = local_10 ^ local_c;return;}