#include <stdio.h>

#include <stdlib.h>

#include <stdbool.h>

#include <string.h>

#include <sys/stat.h>

# 1 
void func0(long param_1,char param_2){undefined uVar1;undefined4 local_10;undefined4 local_c;local_10 = 0;for (local_c = 7; -1 < local_c; local_c = local_c + -1) {if (((int)param_2 >> ((byte)local_c & 0x1f) & 1U) == 0) {uVar1 = 0x30;}else {uVar1 = 0x31;}*(undefined *)(param_1 + local_10) = uVar1;local_10 = local_10 + 1;}*(undefined *)(param_1 + 8) = 0;return;}