#include <string.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
_BYTE *v2; // rax
_BYTE *v4; // [rsp+18h] [rbp-18h]
_BYTE *i; // [rsp+20h] [rbp-10h]

v4 = a1;
for ( i = a1; *i; ++i )
{
while ( *a2 && *a2 != *i )
++a2;
if ( !*a2 )
{
v2 = v4++;
*v2 = *i;
}
}
*v4 = 0;
return (_BYTE *)(v4 - a1);
}