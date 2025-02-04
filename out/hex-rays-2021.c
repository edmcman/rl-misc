#include <stdint.h>

# 1 
#include "defs.h"
float * func0(float *a1, float a2, float a3)
{
float *result; // rax

result = a1;
*a1 = a2 + a3;
return result;
}