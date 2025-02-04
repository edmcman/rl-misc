#include <stdlib.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
_BYTE *result; // rax
_BYTE *i; // [rsp+18h] [rbp-8h]

for ( i = a2; ; ++i )
{
result = (_BYTE *)(i - a2);
if ( (unsigned __int64)(i - a2) > 7 )
break;
*a1++ = *i;
}
return result;
}