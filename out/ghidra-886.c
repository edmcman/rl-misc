#include <stdio.h>

#include <stdlib.h>

#include <memory.h>

# 1 
void func0(char *param_1,char *param_2){char *pcVar1;char *local_18;char *local_10;local_10 = param_1;for (local_18 = param_2; *local_18 != '\0'; local_18 = local_18 + 1) {if (*local_18 == '\t') {pcVar1 = local_10 + 1;*local_10 = '\\';local_10 = local_10 + 2;*pcVar1 = 'n';}else if (*local_18 == '\n') {*local_10 = '\\';local_10[1] = 'n';local_10 = local_10 + 2;}else {*local_10 = *local_18;local_10 = local_10 + 1;}}*local_10 = '\0';return;}