#include <stdlib.h>

#include <unistd.h>

#include <limits.h>

#include <errno.h>

#include <math.h>

#include <stdio.h>

#include <assert.h>

#include <string.h> // for strcmp

#include <sys/time.h>

# 1 
#include "defs.h"
int * func0(int *a1, int *a2)
{
int *result; // rax
int v3; // [rsp+1Ch] [rbp-4h]

v3 = *a1;
*a1 = *a2;
result = a2;
*a2 = v3;
return result;
}