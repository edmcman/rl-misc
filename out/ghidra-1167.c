#include <stdio.h>

#include <stdlib.h>

#include <limits.h>

#include <math.h>

# 1 
void func0(char *param_1,int *param_2){uint local_1c;int local_18;int local_14;char *local_10;local_14 = 0;local_18 = 1;for (local_10 = param_1; *local_10 != '\0'; local_10 = local_10 + 1) {if (*local_10 < 'A') {local_1c = (int)*local_10 & 0xf;}else {local_1c = ((int)*local_10 & 0x1fU) + 9;}local_14 = local_14 + local_1c * local_18;local_18 = local_18 * 0x24;}*param_2 = local_14;return;}