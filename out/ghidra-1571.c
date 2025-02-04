#include <stdio.h>

#include <string.h>

# 1 
void func0(long param_1,long param_2){int *piVar1;undefined4 local_c;for (local_c = 0; *(char *)(param_1 + local_c) != '\0'; local_c = local_c + 1) {if (('`' < *(char *)(param_1 + local_c)) && (*(char *)(param_1 + local_c) < '{')) {piVar1 = (int *)(param_2 + (long)*(char *)(param_1 + local_c) * 4 + -0x184);*piVar1 = *piVar1 + 1;}if (('@' < *(char *)(param_1 + local_c)) && (*(char *)(param_1 + local_c) < '[')) {piVar1 = (int *)(param_2 + (long)*(char *)(param_1 + local_c) * 4 + -0x104);*piVar1 = *piVar1 + 1;}}return;}