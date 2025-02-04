
# 1 
#include "defs.h"
float * func0(float *a1, float *a2, float *a3, float a4)
{
float *result; // rax

*a1 = *a1 + a4;
*a2 = *a2 + a4;
result = a3;
*a3 = *a3 + a4;
return result;
}