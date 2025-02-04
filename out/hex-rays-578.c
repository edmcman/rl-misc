
# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, __int64 a3)
{
__int64 result; // rax
int i; // [rsp+18h] [rbp-10h]
int j; // [rsp+1Ch] [rbp-Ch]
unsigned int v6; // [rsp+20h] [rbp-8h]
int k; // [rsp+24h] [rbp-4h]

for ( i = 0; i <= 2; ++i )
{
for ( j = 0; j <= 2; ++j )
{
v6 = 0;
for ( k = 0; k <= 2; ++k )
v6 += *(_DWORD *)(4LL * (3 * i + k) + a1) * *(_DWORD *)(4LL * (3 * k + j) + a2);
result = v6;
*(_DWORD *)(a3 + 4LL * (3 * i + j)) = v6;
}
}
return result;
}