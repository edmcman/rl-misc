#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
char * func0(char *param_1,int param_2){char *local_10;local_10 = param_1;if (9 < param_2) {local_10 = (char *)func0(param_1,param_2 / 10);}*local_10 = (char)param_2 + (char)(param_2 / 10) * -10 + '0';return local_10 + 1;}