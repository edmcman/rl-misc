#include <assert.h>

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1)
{
_BYTE *result; // rax
_BYTE *v2; // [rsp+0h] [rbp-18h]
char v3; // [rsp+Fh] [rbp-9h]
_BYTE *v4; // [rsp+10h] [rbp-8h]
_BYTE *i; // [rsp+10h] [rbp-8h]

v2 = a1;
result = a1;
v4 = a1;
if ( a1 )
{
while ( *v4 )
++v4;
for ( i = v4 - 1; ; --i )
{
result = v2;
if ( v2 >= i )
break;
v3 = *v2;
*v2 = *i;
*i = v3;
++v2;
}
}
return result;
}