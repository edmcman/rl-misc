#include <stdio.h>

#include <math.h>

#include <string.h> /* memcpy */

# 1 
#include "defs.h"
float * func0(__int64 a1, __int64 a2, __int64 a3)
{
float *result; // rax
int i; // [rsp+20h] [rbp-8h]
int j; // [rsp+24h] [rbp-4h]

for ( i = 0; i <= 15; i += 4 )
{
for ( j = 0; j <= 3; ++j )
{
result = (float *)(4LL * (i + j) + a1);
*result = (float)(*(float *)(4 * (j + 12LL) + a2) * *(float *)(4 * (i + 3LL) + a3))
+ (float)((float)((float)(*(float *)(4LL * i + a3) * *(float *)(4LL * j + a2))
+ (float)(*(float *)(4 * (j + 4LL) + a2) * *(float *)(4 * (i + 1LL) + a3)))
+ (float)(*(float *)(4 * (j + 8LL) + a2) * *(float *)(4 * (i + 2LL) + a3)));
}
}
return result;
}