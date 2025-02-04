
# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
_BYTE *i; // [rsp+8h] [rbp-18h]

for ( i = a1; ; ++i )
{
*i = *a2;
if ( !*i )
break;
++a2;
}
return a1;
}