#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
float * func0(float *a1, float a2)
{
float v2; // xmm0_4
float *result; // rax

v2 = (float)(a2 - *a1) / 4.0 + *a1;
result = a1;
*a1 = v2;
return result;
}