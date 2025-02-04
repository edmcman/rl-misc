
# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, __int64 a3)
{
__int64 result; // rax
unsigned int i; // [rsp+20h] [rbp-8h]
unsigned int v5; // [rsp+24h] [rbp-4h]
unsigned int v6; // [rsp+24h] [rbp-4h]
unsigned int v7; // [rsp+24h] [rbp-4h]

v5 = 0;
for ( i = 0; i <= 0x1E; ++i )
{
v6 = *(_DWORD *)(4LL * i + a2) + *(_DWORD *)(4LL * i + a3) + v5;
*(_DWORD *)(a1 + 4LL * i) = (unsigned __int8)v6;
v5 = v6 >> 8;
}
v7 = *(_DWORD *)(a2 + 124) + *(_DWORD *)(a3 + 124) + v5;
result = v7;
*(_DWORD *)(a1 + 124) = v7;
return result;
}