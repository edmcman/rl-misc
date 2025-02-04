#include <stdlib.h>

#include <string.h>

# 1 
long func0(long param_1,char *param_2){char cVar1;char *local_18;local_18 = param_2;do {cVar1 = *local_18;(local_18 + 1)[(param_1 - (long)param_2) + -1] = cVar1;local_18 = local_18 + 1;} while (cVar1 != '\0');return param_1;}