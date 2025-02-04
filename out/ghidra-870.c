#include <stdlib.h>

#include <string.h>

#include <assert.h>

# 1 
undefined func0(long param_1,int *param_2){int local_c;local_c = 0;if (param_1 != 0) {for (; *(char *)(param_1 + local_c) != '\0'; local_c = local_c + 1) {if ((((*(char *)(param_1 + local_c) != ' ') && (*(char *)(param_1 + local_c) != '\t')) &&(*(char *)(param_1 + local_c) != '\n')) && (*(char *)(param_1 + local_c) != '\r')) {if (param_2 != (int *)0x0) {*param_2 = local_c;}return *(undefined *)(param_1 + local_c);}}if (param_2 != (int *)0x0) {*param_2 = local_c;}}return 0;}