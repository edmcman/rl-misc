#include <bits/types.h>

#include <stdio.h> 

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1)
{
_BYTE *result; // rax
_BYTE *v2; // [rsp+0h] [rbp-18h]
_BYTE *i; // [rsp+10h] [rbp-8h]
_BYTE *j; // [rsp+10h] [rbp-8h]

v2 = a1;
for ( i = a1; i && *i; ++i )
;
for ( j = i - 1; ; --j )
{
result = v2;
if ( v2 >= j )
break;
*v2 ^= *j;
*j ^= *v2;
*v2++ ^= *j;
}
return result;
}