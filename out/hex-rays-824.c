#include <stdio.h>

#include <string.h>

#include <sys/time.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, __int64 a3)
{
__int64 result; // rax
int i; // [rsp+18h] [rbp-10h]
int j; // [rsp+1Ch] [rbp-Ch]
int k; // [rsp+20h] [rbp-8h]
int v7; // [rsp+24h] [rbp-4h]

for ( i = 0; i <= 7; ++i )
{
for ( j = 0; j <= 7; ++j )
{
v7 = 0;
for ( k = 0; k <= 7; ++k )
v7 += *(_DWORD *)(a1 + 32LL * i + 4LL * k) * *(_DWORD *)(a2 + 32LL * k + 4LL * j);
result = j;
*(_DWORD *)(32LL * i + a3 + 4LL * j) = v7;
}
}
return result;
}