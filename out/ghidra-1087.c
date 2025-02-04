#include <assert.h>

#include <ctype.h>

#include <float.h>

#include <limits.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
char * func0(char *param_1){char cVar1;char *local_20;for (local_20 = param_1; *local_20 != '\0'; local_20 = local_20 + 1) {if ((*local_20 < 'a') || ('z' < *local_20)) {cVar1 = *local_20;}else {cVar1 = *local_20 + -0x20;}*local_20 = cVar1;}return param_1;}