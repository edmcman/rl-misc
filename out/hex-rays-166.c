






# 1 
#include "defs.h"
_BYTE * func0(unsigned __int8 *a1, _BYTE *a2)
{
unsigned __int8 *v2; // rax
_BYTE *result; // rax
int i; // [rsp+18h] [rbp-8h]
int v7; // [rsp+1Ch] [rbp-4h]

for ( i = 0; i <= 15; ++i )
{
result = (_BYTE *)*a1;
if ( !(_BYTE)result )
break;
v2 = a1++;
v7 = (char)*v2;
if ( v7 > 64 && v7 <= 90 )
LOBYTE(v7) = v7 + 32;
result = a2++;
*result = v7;
}
while ( i <= 16 )
{
result = a2++;
*result = 0;
++i;
}
return result;
}