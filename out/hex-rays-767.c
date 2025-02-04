
# 1 
#include "defs.h"
float * func0(float *a1, float *a2, float a3)
{
float *result; // rax

*a1 = *a1 + a3;
result = a2;
*a2 = *a2 - a3;
return result;
}