
# 1 
#include "defs.h"
float * func0(float *a1, float a2)
{
float *result; // rax

*a1 = *a1 * a2;
a1[1] = a1[1] * a2;
result = a1 + 2;
a1[2] = a1[2] * a2;
return result;
}