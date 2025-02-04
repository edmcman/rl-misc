#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
int func0(long param_1,ulong param_2,char *param_3,undefined4 *param_4){int local_10;int local_c;*param_4 = 0;if (*param_3 == '<') {local_10 = 1;if (param_3[1] == '*') {*param_4 = 1;local_10 = 2;}local_c = 0;while ((ulong)(long)local_c < param_2) {if (param_3[local_10] == '\0') {return 0;}if (param_3[local_10] == '>') break;*(char *)(local_c + param_1) = param_3[local_10];local_10 = local_10 + 1;local_c = local_c + 1;}*(undefined *)(param_1 + local_c) = 0;local_10 = local_10 + 1;}else {local_10 = 0;}return local_10;}