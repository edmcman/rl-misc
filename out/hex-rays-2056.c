#include <math.h>

#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
__int64 result; // rax
int i; // [rsp+18h] [rbp-8h]
int j; // [rsp+18h] [rbp-8h]
int l; // [rsp+18h] [rbp-8h]
int n; // [rsp+18h] [rbp-8h]
int k; // [rsp+1Ch] [rbp-4h]
int m; // [rsp+1Ch] [rbp-4h]

for ( i = 0; i <= 2; ++i )
{
result = 32LL * i + a1;
*(_DWORD *)result = 0;
}
for ( j = 0; j <= 2; ++j )
{
for ( k = 0; k <= 2; ++k )
{
result = j + 1;
*(_DWORD *)(a1 + 32LL * k + 4 * result) = *(_DWORD *)(a2 + 12LL * k + 4LL * j);
}
}
for ( l = 0; l <= 2; ++l )
{
for ( m = 0; m <= 2; ++m )
{
result = l + 4;
*(_DWORD *)(32LL * m + a1 + 4 * result) = *(_DWORD *)(12LL * m + a2 + 4LL * ((l + 1) % 3))
+ *(_DWORD *)(12LL * m + a2 + 4LL * ((l + 2) % 3));
}
}
for ( n = 0; n <= 2; ++n )
{
result = 32LL * n + a1;
*(_DWORD *)(result + 28) = *(_DWORD *)(12LL * n + a2 + 4)
+ *(_DWORD *)(12LL * n + a2)
+ *(_DWORD *)(12LL * n + a2 + 8);
}
return result;
}