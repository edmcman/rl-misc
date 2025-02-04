#include <math.h>

#include <stdio.h>

# 1 
#include "defs.h"
float * func0(float *a1, float a2, float a3)
{
float *result; // rax

result = a1;
*a1 = a3 * a2;
return result;
}