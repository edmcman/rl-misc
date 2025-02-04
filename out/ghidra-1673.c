#include <sys/types.h>

#include <dirent.h>

#include <regex.h>

#include <stdio.h>

#include <string.h>

#include <stdlib.h>

# 1 
void func0(undefined *param_1,char *param_2){char cVar1;char *local_28;char *local_10;local_10 = param_1 + 1;*param_1 = 0x5e;local_28 = param_2;do {if (*local_28 == '\0') {*local_10 = '$';local_10[1] = '\0';return;}cVar1 = *local_28;if (cVar1 == '?') {*local_10 = '.';local_10 = local_10 + 1;}else if (cVar1 < '@') {if (cVar1 == '*') {*local_10 = '.';local_10[1] = '*';local_10 = local_10 + 2;}else {if (cVar1 != '.') goto LAB_0010009d;*local_10 = '\\';local_10[1] = '.';local_10 = local_10 + 2;}}else {LAB_0010009d:*local_10 = *local_28;local_10 = local_10 + 1;}local_28 = local_28 + 1;} while( true );}