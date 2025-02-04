
# 1 
#include "defs.h"
_DWORD * func0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
_DWORD *result; // rax
int i; // [rsp+28h] [rbp-4h]

for ( i = 0; i <= 9; ++i )
{
result = (_DWORD *)(4LL * i + a3);
*result = *(_DWORD *)(4LL * i + a1) + a4 * *(_DWORD *)(4LL * i + a2);
}
return result;
}