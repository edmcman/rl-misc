#include <stdio.h>

# 1 
void func0(int *param_1,long param_2){int iVar1;int local_c;local_c = 0;do {if (*(char *)(param_2 + local_c) == '\0') {LAB_0010007d:if (*(char *)(param_2 + local_c) == '\0') {param_1[2] = param_1[1] - local_c;}return;}iVar1 = getchar();*param_1 = iVar1;if (*param_1 != (int)*(char *)(param_2 + local_c)) {param_1[1] = param_1[1] + 1;goto LAB_0010007d;}local_c = local_c + 1;param_1[1] = param_1[1] + 1;} while( true );}