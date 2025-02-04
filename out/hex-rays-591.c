
# 1 
#include "defs.h"
float * func0(__int64 a1, __int64 a2)
{
float *result; // rax
int i; // [rsp+1Ch] [rbp-4h]

for ( i = 0; i <= 2; ++i )
{
result = (float *)(4LL * i + a1);
if ( *result > *(float *)(4LL * i + a2) )
{
result = (float *)(4LL * i + a1);
*result = *(float *)(a2 + 4LL * i);
}
}
return result;
}