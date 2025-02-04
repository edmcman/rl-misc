#include <stdio.h>

#include <stdlib.h> 

#include <string.h> 

# 1 
uint func0(long param_1,int *param_2){undefined4 local_c;local_c = 0;*param_2 = 0;while ((('/' < *(char *)(param_1 + (ulong)local_c) && (*(char *)(param_1 + (ulong)local_c) < ':'))&& (local_c < 9))) {*param_2 = (int)*(char *)(param_1 + (ulong)local_c) + *param_2 * 10 + -0x30;local_c = local_c + 1;}return local_c;}