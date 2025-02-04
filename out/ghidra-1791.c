#include <string.h>

#include <stdio.h>

#include <stdlib.h>

#include <assert.h>

#include <math.h>

# 1 
void func0(long param_1,long param_2,long param_3){long lVar1;undefined4 local_10;undefined4 local_c;for (local_10 = 0;(*(char *)(param_2 + local_10) != '\0' && (*(char *)(param_2 + local_10) != '|'));local_10 = local_10 + 1) {*(undefined *)(param_1 + local_10) = *(undefined *)(param_2 + local_10);}for (local_c = 0; (local_10 < 0x100 && (*(char *)(param_3 + local_c) != '\0'));local_c = local_c + 1) {*(undefined *)(param_1 + local_10) = *(undefined *)(param_3 + local_c);local_10 = local_10 + 1;}if (local_10 < 0xff) {lVar1 = (long)local_10;}else {lVar1 = 0xff;}*(undefined *)(lVar1 + param_1) = 0;return;}