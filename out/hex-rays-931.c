#include <math.h>

#include <string.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, double a3)
{
__int64 result; // rax
int i; // [rsp+20h] [rbp-8h]
int j; // [rsp+24h] [rbp-4h]

for ( i = 0; i <= 3; ++i )
{
for ( j = 0; j <= 3; ++j )
{
result = j;
*(double *)(a2 + 32LL * i + 8LL * j) = *(double *)(a1 + 32LL * i + 8LL * j) * a3;
}
}
return result;
}