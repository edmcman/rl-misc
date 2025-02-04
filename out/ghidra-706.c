#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <stdbool.h>

#include <string.h>

#include <time.h>

# 1 
bool func0(char param_1,long param_2,long param_3,int param_4){int local_10;int local_c;local_c = 0;for (local_10 = 0; local_10 < param_4; local_10 = local_10 + 1) {if (param_1 == *(char *)(param_2 + local_10)) {*(char *)(local_10 + param_3) = param_1;local_c = local_c + 1;}}return local_c != 0;}