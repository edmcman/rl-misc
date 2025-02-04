#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <stdint.h>

#include <stdbool.h>

# 1 
char * func0(char *param_1,int param_2){bool bVar1;int iVar2;int local_1c;int local_18;char *local_10;local_18 = 1000000000;bVar1 = false;local_1c = param_2;local_10 = param_1;if (param_2 < 0) {local_1c = -param_2;*param_1 = '-';local_10 = param_1 + 1;}do {iVar2 = local_1c / local_18;if ((iVar2 != 0) || (bVar1)) {bVar1 = true;*local_10 = (char)iVar2 + '0';local_10 = local_10 + 1;local_1c = local_1c - iVar2 * local_18;}local_18 = local_18 / 10;} while (1 < local_18);*local_10 = (char)local_1c + '0';local_10[1] = '\0';return local_10 + 1;}