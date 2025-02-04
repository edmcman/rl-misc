
# 1 
#include "defs.h"
float * func0(__int64 a1, __int64 a2, __int64 a3)
{
float *result; // rax
int i; // [rsp+24h] [rbp-4h]

for ( i = 0; i <= 2; ++i )
{
result = (float *)(4LL * i + a1);
*result = *(float *)(4LL * i + a3) + *(float *)(4LL * i + a2);
}
return result;
}