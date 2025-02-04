#include <stdio.h>

#include <string.h>

# 1 
void func0(long param_1,int param_2,int *param_3,int *param_4){undefined4 local_10;undefined4 local_c;for (local_10 = param_2;(((*(char *)(param_1 + local_10) == ' ' || (*(char *)(param_1 + local_10) == '\t')) ||(*(char *)(param_1 + local_10) == '\r')) || (*(char *)(param_1 + local_10) == '\n'));local_10 = local_10 + 1) {}for (local_c = local_10;((*(char *)(param_1 + local_c) != '\r' && (*(char *)(param_1 + local_c) != '\n')) &&(*(char *)(param_1 + local_c) != '\0')); local_c = local_c + 1) {}*param_3 = local_10;*param_4 = local_c;return;}