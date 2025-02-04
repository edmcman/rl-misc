
# 1 
#include "defs.h"
__int64  func0(int *a1, __int64 a2)
{
__int64 result; // rax

for ( *a1 = 0; ; ++*a1 )
{
if ( *(_BYTE *)(*a1 + a2) != 32
&& *(_BYTE *)(*a1 + a2) != 10
&& *(_BYTE *)(*a1 + a2) != 9
&& *(_BYTE *)(*a1 + a2) != 11
&& *(_BYTE *)(*a1 + a2) != 12 )
{
result = *(unsigned __int8 *)(*a1 + a2);
if ( (_BYTE)result != 13 )
break;
}
}
return result;
}