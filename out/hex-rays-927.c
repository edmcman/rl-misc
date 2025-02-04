#include <stdint.h>

#include <stddef.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
_BYTE *v2; // rax
int i; // [rsp+1Ch] [rbp-4h]

for ( i = 0; ; ++i )
{
v2 = (_BYTE *)(i + a1);
*v2 = *(_BYTE *)(a2 + i);
if ( !*v2 )
break;
}
return a1;
}