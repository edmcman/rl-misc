#include <math.h>

# 1 
#include "defs.h"
float * func0(__int64 a1, __int64 a2, __int64 a3)
{
float *result; // rax
int j; // [rsp+1Ch] [rbp-Ch]
int i; // [rsp+20h] [rbp-8h]
int k; // [rsp+24h] [rbp-4h]

for ( i = 0; i <= 3; ++i )
{
for ( j = 0; j <= 3; ++j )
{
result = (float *)(4LL * (4 * i + j) + a3);
*result = 0.0;
for ( k = 0; k <= 3; ++k )
{
result = (float *)(4LL * (4 * i + j) + a3);
*result = (float)(*(float *)(4LL * (4 * k + j) + a2) * *(float *)(4LL * (4 * i + k) + a1)) + *result;
}
}
}
return result;
}