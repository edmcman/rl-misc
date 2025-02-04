#include <stdio.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1)
{
_BYTE *result; // rax
_BYTE *v2; // rax
_BYTE *v3; // rax
_BYTE *v4; // [rsp+0h] [rbp-18h]
char v5; // [rsp+Fh] [rbp-9h]
_BYTE *v6; // [rsp+10h] [rbp-8h]
_BYTE *i; // [rsp+10h] [rbp-8h]

v4 = a1;
result = a1;
v6 = a1;
if ( a1 )
{
while ( *v6 )
++v6;
for ( i = v6 - 1; ; --i )
{
result = v4;
if ( v4 >= i )
break;
v5 = *v4;
v2 = v4++;
*v2 = *i;
v3 = i;
*v3 = v5;
}
}
return result;
}