#include <stdlib.h>

#include <math.h>

#include <stdio.h>

#include <time.h>

# 1 
void func0(int *param_1,int param_2){int local_10;int local_c;for (local_10 = 1; local_10 != param_2; local_10 = local_10 + 1) {local_c = param_2 / local_10;if ((local_c <= local_10) && (param_2 == local_10 * local_c)) goto LAB_0010004c;}local_c = 1;LAB_0010004c:*param_1 = local_10;param_1[1] = local_c;return;}