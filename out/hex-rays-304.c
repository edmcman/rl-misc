
# 1 
#include "defs.h"
float * func0(float *a1, float a2, float a3, float a4)
{
float *result; // rax

*a1 = a2;
a1[1] = a3;
result = a1 + 2;
a1[2] = a4;
return result;
}