#include <stdio.h>

#include <stdlib.h>

# 1 
int func0(int param_1,long param_2){undefined4 local_c;if (param_1 < 1) {local_c = 0;}else {local_c = 1;if (9 < param_1) {local_c = func0(param_1 / 10,param_2);local_c = local_c + 1;}*(char *)(param_2 + (long)local_c + -1) = (char)param_1 + (char)(param_1 / 10) * -10 + '0';}return local_c;}