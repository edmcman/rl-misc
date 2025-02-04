#include <poll.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, __int64 a2)
{
_BYTE *result; // rax
int i; // [rsp+1Ch] [rbp-4h]

*a1 = 56;
for ( i = 0; ; ++i )
{
result = (_BYTE *)*(unsigned __int8 *)(i + a2);
if ( !(_BYTE)result || i > 7 )
break;
a1[i + 1] = *(_BYTE *)(i + a2);
}
while ( i <= 8 )
{
result = &a1[i + 1];
*result = 0;
++i;
}
return result;
}