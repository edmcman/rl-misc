
# 1 
#include "defs.h"
float * func0(__int64 a1, float a2)
{
float *result; // rax
int i; // [rsp+18h] [rbp-4h]

for ( i = 0; i <= 7; ++i )
{
result = (float *)(4LL * i + a1);
*result = *result * a2;
}
return result;
}