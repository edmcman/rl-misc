#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>

#include <string.h>

#include <ctype.h>

# 1 
void func0(char *param_1,char *param_2,int param_3){char *local_28;char *local_20;int local_c;local_c = 0;for (local_28 = param_2;(local_20 = param_1, *local_28 < '!' && (local_20 = param_1, '\0' < *local_28));local_28 = local_28 + 1) {}for (; ((' ' < *local_28 || (*local_28 < '\0')) && (local_c < param_3 + -1));local_c = local_c + 1) {*local_20 = *local_28;local_28 = local_28 + 1;local_20 = local_20 + 1;}*local_20 = '\0';return;}