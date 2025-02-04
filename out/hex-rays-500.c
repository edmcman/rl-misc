
# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2, int a3)
{
_BYTE *v4; // rdx
_BYTE *v5; // rax
int v6; // [rsp+0h] [rbp-24h]
_BYTE *v8; // [rsp+Ch] [rbp-18h]

v8 = a1;
v6 = a3;
if ( a3 <= 0 )
return a1;
do
{
if ( --v6 <= 0 )
break;
v4 = a2++;
v5 = v8++;
*v5 = *v4;
}
while ( *v5 );
*v8 = 0;
return a1;
}