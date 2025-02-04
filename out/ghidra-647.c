#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <string.h>

# 1 
char * func0(char *param_1,char *param_2,int param_3){int local_1c;char *local_18;char *local_10;local_1c = param_3;local_18 = param_2;local_10 = param_1;while ((((local_1c != 0 && (local_18 != (char *)0x0)) && (local_10 != (char *)0x0)) &&(((*local_18 != '\0' && (*local_18 != ',')) && (*local_18 != '*'))))) {*local_10 = *local_18;local_1c = local_1c + -1;local_18 = local_18 + 1;local_10 = local_10 + 1;}*local_10 = '\0';return local_10;}