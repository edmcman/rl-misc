#include <stddef.h>

#include <stdarg.h>

#include <limits.h>

#include <math.h>

#include <ctype.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <setjmp.h>

#include <errno.h>

#include <time.h>

# 1 
int func0(long param_1,int *param_2){int local_1c;int local_18;int local_14;int local_10;int local_c;local_14 = 0;local_10 = 0;local_c = 0;local_1c = 0;for (local_18 = 1; local_18 / 2 < *param_2; local_18 = local_18 << 1) {if ((0 < *(int *)(param_1 + (long)local_1c * 4)) &&(local_14 = local_14 + *(int *)(param_1 + (long)local_1c * 4), local_18 / 2 < local_14)) {local_c = local_18;local_10 = local_14;}if (local_14 == *param_2) break;local_1c = local_1c + 1;}*param_2 = local_c;return local_10;}