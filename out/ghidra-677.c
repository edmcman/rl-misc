#include <stdio.h>

#include <ctype.h>

#include <stdlib.h>

#include <time.h>

# 1 
char * func0(char *param_1,char *param_2,int param_3){char *local_28;char *local_20;int local_c;local_c = 0;local_28 = param_2;local_20 = param_1;while ((local_c < param_3 && (*local_28 != '\0'))) {*local_20 = *local_28;local_c = local_c + 1;local_28 = local_28 + 1;local_20 = local_20 + 1;}*local_20 = '\0';return local_20;}