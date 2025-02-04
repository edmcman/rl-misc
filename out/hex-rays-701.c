
# 1 
#include "defs.h"
_DWORD * func0(__int64 a1, __int64 a2)
{
_DWORD *result; // rax
int i; // [rsp+14h] [rbp-Ch]
int j; // [rsp+14h] [rbp-Ch]
int k; // [rsp+18h] [rbp-8h]
unsigned int v6; // [rsp+1Ch] [rbp-4h]

for ( i = 0; i <= 19; ++i )
{
result = (_DWORD *)(4LL * i + a2);
*result = -1;
}
for ( j = 0; j <= 19; ++j )
{
v6 = 1;
for ( k = j + 1; k <= 19; ++k )
{
if ( *(_DWORD *)(4LL * j + a1) == *(_DWORD *)(4LL * k + a1) )
{
*(_DWORD *)(4LL * k + a2) = 0;
++v6;
}
}
result = (_DWORD *)*(unsigned int *)(4LL * j + a2);
if ( (_DWORD)result )
{
result = (_DWORD *)v6;
*(_DWORD *)(a2 + 4LL * j) = v6;
}
}
return result;
}