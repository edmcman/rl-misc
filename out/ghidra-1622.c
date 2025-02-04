#include <stdarg.h>

# 1 
char * func0(char *param_1,char *param_2){char cVar1;char *pcVar2;char *local_20;pcVar2 = param_1;local_20 = param_2;do {*pcVar2 = *local_20;cVar1 = *pcVar2;pcVar2 = pcVar2 + 1;local_20 = local_20 + 1;} while (cVar1 != '\0');return param_1;}