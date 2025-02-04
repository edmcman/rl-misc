#include <math.h>

#include <stdio.h>

#include <string.h>

# 1 
#include "defs.h"
float * func0(__int64 a1, __int64 a2, __int64 a3)
{
float *result; // rax
unsigned int j; // [rsp+20h] [rbp-8h]
unsigned int i; // [rsp+24h] [rbp-4h]

for ( i = 0; i <= 3; ++i )
{
for ( j = 0; j <= 3; ++j )
{
result = (float *)(4LL * (4 * i + j) + a3);
*result = (float)(*(float *)(4LL * (4 * i + 3) + a2) * *(float *)(4LL * (j + 12) + a1))
+ (float)((float)((float)(*(float *)(4LL * j + a1) * *(float *)(16LL * i + a2))
+ (float)(*(float *)(4LL * (4 * i + 1) + a2) * *(float *)(4LL * (j + 4) + a1)))
+ (float)(*(float *)(4LL * (4 * i + 2) + a2) * *(float *)(4LL * (j + 8) + a1)));
}
}
return result;
}