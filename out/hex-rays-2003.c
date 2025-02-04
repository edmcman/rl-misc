
# 1 
#include "defs.h"
float * func0(float *a1, float a2, float a3, float a4, float a5)
{
float *result; // rax

a1[8] = a2;
a1[9] = a3;
a1[10] = a4;
result = a1 + 11;
a1[11] = a5;
return result;
}