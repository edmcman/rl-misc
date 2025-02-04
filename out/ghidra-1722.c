#include <stdio.h>

#include <string.h>

#include <ctype.h>

# 1 
void func0(long param_1,int param_2){undefined4 local_c;for (local_c = 0; local_c < param_2; local_c = local_c + 1) {if ('`' < *(char *)(param_1 + local_c)) {*(char *)(param_1 + local_c) = *(char *)(param_1 + local_c) + -0x20;}}return;}