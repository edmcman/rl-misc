#include <stdio.h>

#include <stdlib.h>

#include <limits.h>

#include <getopt.h>

# 1 
void func0(long param_1,char param_2){undefined uVar1;undefined4 local_c;for (local_c = 0; local_c < 9; local_c = local_c + 1) {if (((int)param_2 >> ((byte)local_c & 0x1f) & 1U) == 0) {uVar1 = 0x30;}else {uVar1 = 0x31;}*(undefined *)(param_1 + (8 - local_c)) = uVar1;}return;}