#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(int *param_1,int param_2,int param_3,int param_4,int *param_5){*param_5 = *param_1 + param_2;param_5[1] = param_3 + param_1[1];param_5[2] = param_4 + param_1[2];return;}