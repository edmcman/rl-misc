#include <stdio.h>

# 1 
char * func0(char *param_1,char *param_2){char *pcVar1;char *local_18;char *local_10;local_18 = param_2;pcVar1 = param_1;do {local_10 = pcVar1;*local_10 = *local_18;local_18 = local_18 + 1;pcVar1 = local_10 + 1;} while (*local_10 != '\0');return local_10;}