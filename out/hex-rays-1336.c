
# 1 
#include "defs.h"
_DWORD * func0(__int64 a1, __int64 a2)
{
_DWORD *result; // rax
int i; // [rsp+1Ch] [rbp-4h]

for ( i = 0; i <= 2; ++i )
{
*(_DWORD *)(a1 + 4LL * i) = *(_DWORD *)(4LL * i + a1) % *(_DWORD *)(4LL * i + a2);
result = (_DWORD *)*(unsigned int *)(4LL * i + a1);
if ( (int)result < 0 )
{
result = (_DWORD *)(4LL * i + a1);
*result += *(_DWORD *)(4LL * i + a2);
}
}
return result;
}