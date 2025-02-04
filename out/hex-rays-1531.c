#include <math.h>

#include <memory.h>

# 1 
#include "defs.h"
float * func0(float *a1, float a2, float a3, float a4)
{
float *result; // rax

*a1 = *a1 * a2;
a1[4] = a1[4] * a3;
a1[8] = a1[8] * a4;
a1[1] = a1[1] * a2;
a1[5] = a1[5] * a3;
a1[9] = a1[9] * a4;
a1[2] = a1[2] * a2;
a1[6] = a1[6] * a3;
a1[10] = a1[10] * a4;
a1[3] = a1[3] * a2;
a1[7] = a1[7] * a3;
result = a1 + 11;
a1[11] = a1[11] * a2;
return result;
}