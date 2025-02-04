#include <math.h>

# 1 
#include "defs.h"
_DWORD * func0(__int64 a1, __int64 a2)
{
int i; // ebx
_DWORD *result; // rax

for ( i = 0; i <= 2; ++i )
{
result = (_DWORD *)(4LL * i + a2);
*result = *(_DWORD *)(a1 + 4LL * i);
}
return result;
}