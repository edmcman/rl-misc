#include <math.h> /* for log10() and floor() */

#include <stdio.h> /* for printf() */

# 1 
#include "defs.h"
__int64  func0(unsigned __int64 a1, int a2, __int64 a3, _QWORD *a4)
{
__int64 v6; // [rsp+28h] [rbp-18h]
unsigned __int64 v7; // [rsp+38h] [rbp-8h]
unsigned __int64 v8; // [rsp+38h] [rbp-8h]

v6 = a3 + 64;
*(_BYTE *)(a3 + 64) = 0;
if ( a2 )
{
while ( a1 )
{
v7 = a1 - 1;
a1 = (a1 - 1) / 0x1A;
*(_BYTE *)--v6 = aAbcdefghijklmn[v7 % 0x1A];
}
}
else
{
while ( a1 )
{
v8 = a1 - 1;
a1 = (a1 - 1) / 0x1A;
*(_BYTE *)--v6 = aAbcdefghijklmn_0[v8 % 0x1A];
}
}
*a4 = a3 + 64 - v6;
return v6;
}