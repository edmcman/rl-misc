#include <math.h>

#include <string.h>

#include <stdlib.h>

# 1 
#include "defs.h"
float * func0(float *a1, float a2, float a3, float a4)
{
float *result; // rax

*a1 = *a1 * a2;
a1[1] = a1[1] * a2;
a1[2] = a1[2] * a2;
a1[4] = a1[4] * a3;
a1[5] = a1[5] * a3;
a1[6] = a1[6] * a3;
a1[8] = a1[8] * a4;
a1[9] = a1[9] * a4;
result = a1 + 10;
a1[10] = a1[10] * a4;
return result;
}