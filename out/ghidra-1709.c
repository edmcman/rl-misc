#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <time.h>

# 1 
void func0(uint param_1,long param_2){undefined uVar1;undefined4 local_10;undefined4 local_c;local_10 = 0;for (local_c = 0x80; local_c != 0; local_c = local_c >> 1) {if ((param_1 & local_c) == 0) {uVar1 = 0x30;}else {uVar1 = 0x31;}*(undefined *)(param_2 + local_10) = uVar1;local_10 = local_10 + 1;}*(undefined *)(param_2 + local_10) = 0;return;}