
# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, int *a2)
{
_BYTE *v3; // [rsp+8h] [rbp-18h]
int v4; // [rsp+1Ch] [rbp-4h]
int v5; // [rsp+1Ch] [rbp-4h]

v3 = a1;
if ( *a1 == 48 && a1[1] == 120 )
v3 = a1 + 2;
*a2 = 0;
while ( 1 )
{
v5 = (char)*v3;
if ( !*v3 )
break;
if ( v5 <= 96 || v5 > 102 )
{
if ( v5 <= 64 || v5 > 70 )
{
if ( v5 <= 47 || v5 > 57 )
return 0LL;
v4 = v5 - 48;
}
else
{
v4 = v5 - 55;
}
}
else
{
v4 = v5 - 87;
}
*a2 = v4 | (16 * *a2);
++v3;
}
return 1LL;
}