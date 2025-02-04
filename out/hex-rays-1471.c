





# 1 
#include "defs.h"
float * func0(float *a1)
{
float *result; // rax

*a1 = *a1 + 1.0e-18;
result = a1;
*a1 = *a1 - 1.0e-18;
return result;
}