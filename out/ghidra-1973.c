#include <stdio.h>

# 1 
void func0(int *param_1){int *local_20;int local_c;local_20 = param_1;for (local_c = 0; local_c < 4; local_c = local_c + 1) {*local_20 = local_c * 3;local_20 = local_20 + 1;}return;}