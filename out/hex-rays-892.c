#include <stdio.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
_BYTE *result; // rax
_BYTE *v3; // rdx
_BYTE *v4; // rax
_BYTE *v5; // [rsp+0h] [rbp-20h]
_BYTE *v6; // [rsp+8h] [rbp-18h]

v6 = a1;
v5 = a2;
result = a1;
if ( a1 && a2 )
{
do
{
v3 = v5++;
v4 = v6++;
*v4 = *v3;
}
while ( *v4 );
result = a1;
}
return result;
}