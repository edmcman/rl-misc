#include <stdio.h>

#include <stdlib.h>

#include <time.h>

# 1 
int func0(int *param_1,int param_2,int param_3){int local_c;*param_1 = param_3;for (local_c = param_2; param_3 != param_1[local_c]; local_c = local_c + -1) {}return local_c;}