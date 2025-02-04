#include <stdarg.h>

#include <stdio.h>

#include <gmp.h>

# 1 
char * func0(char *param_1,char *param_2){char *pcVar1;char *local_18;char *local_10;pcVar1 = param_1;local_10 = param_2;do {local_18 = pcVar1;*local_18 = *local_10;pcVar1 = local_18 + 1;local_10 = local_10 + 1;} while (*local_18 != '\0');return local_18;}