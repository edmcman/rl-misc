
# 1 
#include "defs.h"
float * func0(float *a1, int *a2)
{
float *result; // rax

result = a1;
*a1 = (float)*a2;
return result;
}