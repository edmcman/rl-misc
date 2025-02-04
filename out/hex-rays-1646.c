#include <stdio.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1)
{
_BYTE *v1; // rax
_BYTE *result; // rax
_BYTE *v3; // [rsp+0h] [rbp-28h]
char v4; // [rsp+17h] [rbp-11h]
_BYTE *v5; // [rsp+18h] [rbp-10h]
_BYTE *i; // [rsp+20h] [rbp-8h]

v3 = a1;
v5 = a1;
do
v1 = v3++;
while ( *v1 );
for ( i = v3 - 2; ; --i )
{
result = v5;
if ( v5 >= i )
break;
v4 = *v5;
*v5 = *i;
*i = v4;
++v5;
}
return result;
}