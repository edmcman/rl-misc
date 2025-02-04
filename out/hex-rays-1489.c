#include <math.h> /* for log10() and floor() */

#include <stdio.h> /* for printf() */

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2, int a3, __int64 a4, _QWORD *a5)
{
__int64 v7; // [rsp+28h] [rbp-18h]
__int64 v8; // [rsp+30h] [rbp-10h]

v7 = a4 + 64;
*(_BYTE *)(a4 + 64) = 0;
if ( a3 )
{
do
{
v8 = a1;
a1 /= a2;
*(_BYTE *)--v7 = aZyxwvutsrqponm[v8 - a1 * a2 + 35];
}
while ( a1 );
}
else
{
do
{
v8 = a1;
a1 /= a2;
*(_BYTE *)--v7 = aZyxwvutsrqponm_0[v8 - a1 * a2 + 35];
}
while ( a1 );
}
if ( v8 < 0 )
*(_BYTE *)--v7 = 45;
*a5 = a4 + 64 - v7;
return v7;
}