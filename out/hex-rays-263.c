
# 1 
#include "defs.h"
float * func0(float *a1)
{
float *result; // rax

result = a1;
*(_DWORD *)a1 = (int)*a1;
*a1 = (float)*(int *)a1;
return result;
}