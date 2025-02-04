#include <ctype.h>

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(char *param_1,char *param_2,int param_3){int iVar1;bool bVar2;char *local_28;char *local_20;int local_c;local_28 = param_2;local_20 = param_1;local_c = param_3;while ((iVar1 = local_c + -1, bVar2 = local_c != 0, local_c = param_3, bVar2 &&(*local_28 != '\0'))) {*local_20 = *local_28;local_28 = local_28 + 1;local_20 = local_20 + 1;local_c = iVar1;}do {if (local_c == 0) break;local_20 = local_20 + -1;local_c = local_c + -1;} while (*local_20 == ' ');local_20[1] = '\0';return;}