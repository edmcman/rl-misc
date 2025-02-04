#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <stdbool.h>

#include <stdarg.h>

# 1 
void func0(long param_1,int param_2,int *param_3){undefined4 local_c;*param_3 = 0;for (local_c = 0; local_c < param_2; local_c = local_c + 1) {if ((*(char *)(param_1 + local_c) == '%') || (*(char *)(param_1 + local_c) == '!')) {if (*(char *)(param_1 + (long)local_c + 1) == '*') {*param_3 = *param_3 + 2;}else {*param_3 = *param_3 + 1;}}}return;}