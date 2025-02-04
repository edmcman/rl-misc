#include <ctype.h>

#include <locale.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
void func0(int param_1,int *param_2,uint param_3,uint *param_4){int *local_28;uint *local_18;uint *local_10;if ((param_3 != 0) && (0 < param_1)) {local_28 = param_2;local_18 = param_4;local_10 = param_4;if (param_2 == (int *)0x0) {for (; local_18 < param_4 + param_1; local_18 = local_18 + 1) {*local_18 = *local_18 | param_3;}}else {for (; local_10 < param_4 + param_1; local_10 = local_10 + 1) {if (*local_28 != 0) {*local_10 = *local_10 | param_3;}local_28 = local_28 + 1;}}}return;}