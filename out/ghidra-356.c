#include <stdio.h>

#include <string.h>

#include <errno.h>

#include <stdlib.h>

#include <inttypes.h>

#include <unistd.h>

# 1 
void func0(long param_1,long param_2){bool bVar1;undefined4 local_14;undefined4 local_c;local_c = 0;bVar1 = false;for (local_14 = 0; *(char *)(param_1 + local_14) != '\0'; local_14 = local_14 + 1) {if (*(char *)(param_1 + local_14) == ']') {bVar1 = true;local_c = 0;*(undefined *)(param_1 + local_14) = 0;if (((*(char *)(param_1 + (long)local_14 + 1) == 'R') ||(*(char *)(param_1 + (long)local_14 + 1) == 'S')) ||(*(char *)(param_1 + (long)local_14 + 1) == 'T')) {local_14 = local_14 + 1;*(undefined *)(param_1 + local_14) = 0;}}if (bVar1) {*(undefined *)(param_2 + local_c) = *(undefined *)(param_1 + local_14);}local_c = local_c + 1;}*(undefined *)(param_2 + local_c) = 0;return;}