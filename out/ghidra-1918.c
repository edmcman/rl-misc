#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
void func0(long param_1,uint param_2){undefined uVar1;undefined4 local_10;undefined4 local_c;local_10 = 7;for (local_c = 1; (int)local_c < 0xff; local_c = local_c << 1) {if ((param_2 & local_c) == 0) {uVar1 = 0x30;}else {uVar1 = 0x31;}*(undefined *)(param_1 + local_10) = uVar1;local_10 = local_10 + -1;}*(undefined *)(param_1 + 8) = 0x20;*(undefined *)(param_1 + 9) = 0;return;}