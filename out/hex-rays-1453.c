#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
__int64 result; // rax
int i; // [rsp+18h] [rbp-8h]
int k; // [rsp+18h] [rbp-8h]
int j; // [rsp+1Ch] [rbp-4h]

for ( i = 0; i <= 1; ++i )
{
for ( j = 0; j <= 2; ++j )
{
result = j;
*(_QWORD *)(a1 + 24LL * i + 8LL * j) = *(_QWORD *)(16LL * j + a2 + 8LL * i);
}
}
for ( k = 0; k <= 2; ++k )
{
result = k;
*(double *)(a1 + 48 + 8LL * k) = -*(double *)(16LL * k + a2) - *(double *)(16LL * k + a2 + 8);
}
return result;
}