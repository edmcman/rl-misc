#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_DWORD * func0(int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
_DWORD *result; // rax
int i; // [rsp+2Ch] [rbp-4h]

for ( i = 0; i <= 25; ++i )
{
if ( *(_DWORD *)(4LL * i + a3) && *(_DWORD *)(a2 + 104LL * a1 + 4LL * i) )
{
--*(_DWORD *)(104LL * a1 + a2 + 4LL * i);
func0((unsigned int)i, a2, a3, a4);
}
}
result = a4;
++*a4;
return result;
}