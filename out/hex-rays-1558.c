
# 1 
#include "defs.h"
__int64  func0(__int64 a1, unsigned __int64 *a2)
{
unsigned int v3; // [rsp+1Ch] [rbp-14h]
unsigned __int64 v4; // [rsp+20h] [rbp-10h]
unsigned __int64 v5; // [rsp+28h] [rbp-8h]

v3 = 0;
v4 = 0LL;
while ( 1 )
{
v5 = (unsigned __int8)(*(_BYTE *)(v3 + a1) - 48);
if ( v5 > 9 )
break;
v4 = 10 * v4 + v5;
++v3;
}
*a2 = v4;
return v3;
}