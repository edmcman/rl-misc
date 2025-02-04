#include <math.h>

#include <memory.h>

# 1 
#include "defs.h"
float * func0(float *a1, float *a2, float *a3)
{
float *result; // rax

*a1 = *a3 * *a2;
a1[1] = a3[1] * a2[1];
result = a1 + 2;
a1[2] = a3[2] * a2[2];
return result;
}