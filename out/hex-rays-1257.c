
# 1 
#include "defs.h"
_DWORD * func0(__int64 a1, __int64 a2, _DWORD *a3)
{
_DWORD *result; // rax
int i; // [rsp+24h] [rbp-4h]

for ( i = 0; i <= 1023; ++i )
{
if ( *(_BYTE *)(i + a1) == 32 || *(_BYTE *)(i + a1) == 10 )
{
result = a3;
*a3 = i + 1;
i = 1024;
}
else
{
result = (_DWORD *)*(unsigned __int8 *)(i + a1);
*(_BYTE *)(i + a2) = (_BYTE)result;
}
}
return result;
}