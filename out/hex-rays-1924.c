
# 1 
#include "defs.h"
float * func0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
float *result; // rax
int i; // [rsp+34h] [rbp-Ch]
int j; // [rsp+34h] [rbp-Ch]
int k; // [rsp+34h] [rbp-Ch]
int l; // [rsp+34h] [rbp-Ch]
int m; // [rsp+38h] [rbp-8h]
int v13; // [rsp+3Ch] [rbp-4h]

for ( i = 1; i <= 14; ++i )
{
result = (float *)(4LL * i + a2);
*result = 1.0;
}
for ( j = 1; j <= 14; j += 3 )
{
result = (float *)(4LL * j + a3);
*result = 1.0;
}
for ( k = 15; k <= 34; k += 3 )
{
result = (float *)(4LL * k + a4);
*result = 1.0;
}
for ( l = 0; l <= 14; ++l )
{
for ( m = l; m <= l + 14; ++m )
*(float *)(4LL * l + a5) = (float)(*(float *)(4LL * (m - l) + a7) * *(float *)(4LL * m + a6))
+ *(float *)(4LL * l + a5);
result = (float *)(4LL * l + a5);
*result = (float)v13 * *result;
}
return result;
}