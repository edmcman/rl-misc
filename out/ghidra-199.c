#include <stdio.h>

#include <string.h>

#include <errno.h>

#include <ctype.h>

#include <stdarg.h>

# 1 
char * func0(char *param_1,char *param_2){char *local_20;char *local_10;local_20 = param_1;local_10 = param_1;while (local_10 < param_2) {if ((*local_10 == '\\') && (local_10 + 1 < param_2)) {local_10 = local_10 + 1;}*local_20 = *local_10;local_20 = local_20 + 1;local_10 = local_10 + 1;}*local_20 = '\0';return local_20;}