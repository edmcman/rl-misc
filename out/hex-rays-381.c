#include <assert.h>

# 1 
#include "defs.h"
float * func0(float *a1)
{
float *result; // rax

*a1 = -*a1;
a1[1] = -a1[1];
result = a1 + 2;
a1[2] = -a1[2];
return result;
}