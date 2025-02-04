#include <assert.h>

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <fcntl.h>

#include <sys/types.h>

#include <aio.h>

# 1 
uint * func0(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6){uint *puVar1;uint uVar2;uint *local_40;uint *local_30;uint *local_20;uint *local_10;local_40 = param_5;local_30 = param_3;local_20 = param_1;local_10 = param_3;while (local_20 < param_2) {puVar1 = local_20 + 1;uVar2 = *local_20;local_20 = puVar1;if ((int)uVar2 < 1) {for (; (local_10 < param_4 && (*local_10 < uVar2)); local_10 = local_10 + 1) {}if (((local_10 != param_4) && (uVar2 == *local_10)) && (local_40 < param_6)) {*local_40 = uVar2;local_40 = local_40 + 1;}}else {for (; (local_30 < param_4 && (uVar2 < *local_30)); local_30 = local_30 + 1) {}if (((local_30 != param_4) && (uVar2 == *local_30)) && (local_40 < param_6)) {*local_40 = uVar2;local_40 = local_40 + 1;}}}return local_40;}