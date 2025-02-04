
# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, _BYTE *a2, int a3)
{
_BYTE *v4; // rdx
_BYTE *v5; // rax
int v9; // [rsp+20h] [rbp-4h]

v9 = 0;
if ( a3 <= 0 )
return 0LL;
do
{
if ( !*a2 )
break;
v4 = a2++;
v5 = a1++;
*v5 = *v4;
++v9;
}
while ( v9 < a3 );
*a1 = 0;
return (unsigned int)v9;
}