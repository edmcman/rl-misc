#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
void func0(int *param_1){undefined4 local_10;undefined4 local_c;local_10 = *param_1;local_c = 1;for (; local_10 != 0; local_10 = local_10 / 10) {if ((local_10 % 10 == 3) || (local_10 % 10 == -7)) {*param_1 = local_c * 4 + *param_1;}else if ((local_10 % 10 == 7) || (local_10 % 10 == -3)) {*param_1 = *param_1 + local_c * -4;}local_c = local_c * 10;}return;}