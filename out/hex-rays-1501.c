
# 1 
#include "defs.h"
float * func0(float *a1, float a2, float a3, float a4)
{
float *result; // rax
int i; // [rsp+20h] [rbp-4h]

*a1 = a3;
result = a1 + 1;
a1[1] = (float)(a4 - a3) / a2;
for ( i = 2; i <= 7; ++i )
{
result = &a1[i];
*result = 0.0;
}
return result;
}