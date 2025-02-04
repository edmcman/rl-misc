#include <malloc.h>

#include <string.h>

#include <stdio.h>

# 1 
#include "defs.h"
float * func0(float *a1, float *a2, float *a3)
{
float *result; // rax

*a3 = (float)((float)(*a2 * *a1) - (float)(a2[1] * a1[1])) + *a3;
result = a3 + 1;
a3[1] = (float)((float)(*a2 * a1[1]) + (float)(*a1 * a2[1])) + a3[1];
return result;
}