
# 1 
#include "defs.h"
float * func0(float *a1, float *a2, float *a3)
{
float *result; // rax

*(float *)&r_1915 = (float)(1.402 * (float)(*a3 - 128.0)) + *a1;
*(float *)&g_1916 = (float)(*a1 - (float)(0.34413999 * (float)(*a2 - 128.0)))
- (float)(0.71414 * (float)(*a3 - 128.0));
*(float *)&b_1917 = (float)(1.772 * (float)(*a2 - 128.0)) + *a1;
*(_DWORD *)a1 = r_1915;
*(_DWORD *)a2 = g_1916;
result = a3;
*(_DWORD *)a3 = b_1917;
return result;
}