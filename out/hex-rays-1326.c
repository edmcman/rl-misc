
# 1 
#include "defs.h"
float * func0(float *a1, float a2, float a3, float a4)
{
float *result; // rax

a1[3] = a1[3] + a2;
a1[7] = a1[7] + a3;
result = a1 + 11;
a1[11] = a1[11] + a4;
return result;
}