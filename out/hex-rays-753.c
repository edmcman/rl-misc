#include <math.h>

#include <string.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, __int64 a3)
{
__int64 result; // rax
int i; // [rsp+1Ch] [rbp-Ch]
int j; // [rsp+20h] [rbp-8h]
int k; // [rsp+24h] [rbp-4h]

for ( i = 0; i <= 3; ++i )
{
for ( j = 0; j <= 3; ++j )
{
result = j;
*(_QWORD *)(a3 + 32LL * i + 8LL * j) = 0LL;
for ( k = 0; k <= 3; ++k )
{
result = j;
*(double *)(a3 + 32LL * i + 8LL * j) = *(double *)(a2 + 32LL * k + 8LL * j)
* *(double *)(a1 + 32LL * i + 8LL * k)
+ *(double *)(a3 + 32LL * i + 8LL * j);
}
}
}
return result;
}