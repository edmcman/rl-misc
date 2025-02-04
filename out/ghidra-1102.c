#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <errno.h>

# 1 
void func0(undefined *param_1,long param_2,int param_3,int param_4){char cVar1;int local_10;int local_c;for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 1) {if (*(char *)(param_2 + local_10) == '\0') {*param_1 = 0;return;}}local_c = 0;while( true ) {if (param_4 <= local_c) {param_1[param_4] = 0;return;}cVar1 = *(char *)(param_2 + (local_c + param_3));param_1[local_c] = cVar1;if (cVar1 == '\0') break;local_c = local_c + 1;}return;}