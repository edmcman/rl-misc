
# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
unsigned int v2; // eax
char v4; // [rsp+1Bh] [rbp-5h]
unsigned int v5; // [rsp+1Ch] [rbp-4h]

v5 = 0;
if ( a1 )
{
while ( 1 )
{
v4 = *(_BYTE *)(v5 + a2);
if ( !v4 )
break;
v2 = v5++;
*(_BYTE *)(a1 + v2) = v4;
}
}
else
{
while ( *(_BYTE *)(v5 + a2) )
++v5;
}
return v5;
}