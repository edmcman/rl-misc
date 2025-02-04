#include <stdio.h>

#include <string.h>

#include <sys/time.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, __int64 a3)
{
__int64 result; // rax
int i; // [rsp+20h] [rbp-18h]
int n; // [rsp+20h] [rbp-18h]
int j; // [rsp+24h] [rbp-14h]
int ii; // [rsp+24h] [rbp-14h]
int m; // [rsp+28h] [rbp-10h]
int k; // [rsp+2Ch] [rbp-Ch]
int l; // [rsp+30h] [rbp-8h]
int v11; // [rsp+34h] [rbp-4h]

for ( i = 0; i <= 7; ++i )
{
for ( j = 0; j <= 7; ++j )
{
result = j;
*(_DWORD *)(a3 + 32LL * i + 4LL * j) = 0;
}
}
for ( k = 0; k <= 7; k += 4 )
{
for ( l = 0; l <= 7; l += 4 )
{
for ( m = 0; m <= 7; ++m )
{
for ( n = k; ; ++n )
{
result = (unsigned int)(k + 3);
if ( n > (int)result )
break;
v11 = *(_DWORD *)(a3 + 32LL * m + 4LL * n);
for ( ii = l; ii <= l + 3; ++ii )
v11 += *(_DWORD *)(a1 + 32LL * m + 4LL * ii) * *(_DWORD *)(a2 + 32LL * ii + 4LL * n);
*(_DWORD *)(32LL * m + a3 + 4LL * n) = v11;
}
}
}
}
return result;
}