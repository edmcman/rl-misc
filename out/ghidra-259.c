#include <stdio.h>

# 1 
void func0(char *param_1,char *param_2){char cVar1;char *local_18;char *local_10;local_18 = param_2;local_10 = param_1;do {*local_10 = *local_18;cVar1 = *local_10;local_18 = local_18 + 1;local_10 = local_10 + 1;} while (cVar1 != '\0');return;}