
# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2, int *a3, _DWORD *a4)
{
__int64 result; // rax

*a4 = *a3;
while ( a2 > *a3 && (*(_BYTE *)(*a3 + a1) == 32 || *(_BYTE *)(*a3 + a1) == 10) )
++*a3;
if ( a2 == *a3 )
result = 0xFFFFFFFFLL;
else
result = 0LL;
return result;
}