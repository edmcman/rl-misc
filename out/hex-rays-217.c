
# 1 
#include "defs.h"
_DWORD * func0(__int64 a1)
{
_DWORD *result; // rax
int i; // [rsp+Ch] [rbp-Ch]
int j; // [rsp+10h] [rbp-8h]

for ( i = 0; i <= 127; ++i )
{
for ( j = 1; j <= 15; ++j )
{
result = (_DWORD *)(4LL * (16 * i + j) + a1);
*result += *(_DWORD *)(4LL * (16 * i + j) - 4 + a1);
}
}
return result;
}