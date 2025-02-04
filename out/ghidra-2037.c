#include <stdio.h>

#include <stdlib.h> 

# 1 
int func0(long param_1,int *param_2){undefined4 local_c;local_c = 0;*param_2 = 0;while (((('/' < *(char *)(param_1 + local_c) && (*(char *)(param_1 + local_c) < ':')) ||(('`' < *(char *)(param_1 + local_c) && (*(char *)(param_1 + local_c) < 'g')))) &&(local_c < 9))) {if ((*(char *)(param_1 + local_c) < '0') || ('9' < *(char *)(param_1 + local_c))) {*param_2 = (int)*(char *)(param_1 + local_c) + *param_2 * 0x10 + -0x57;local_c = local_c + 1;}else {*param_2 = (int)*(char *)(param_1 + local_c) + *param_2 * 0x10 + -0x30;local_c = local_c + 1;}}return local_c;}