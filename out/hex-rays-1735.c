#include <stdio.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1)
{
_BYTE *v1; // rax
_BYTE *v2; // rax
_BYTE *result; // rax
_BYTE *v4; // [rsp+0h] [rbp-18h]
char v5; // [rsp+Fh] [rbp-9h]
_BYTE *i; // [rsp+10h] [rbp-8h]
_BYTE *j; // [rsp+10h] [rbp-8h]

v4 = a1;
for ( i = a1; *i; ++i )
;
for ( j = i - 1; ; --j )
{
result = v4;
if ( v4 >= j )
break;
v5 = *v4;
v1 = v4++;
*v1 = *j;
v2 = j;
*v2 = v5;
}
return result;
}