#include    <stdlib.h>  /* Include standard library header */

#include    <math.h>    /* Include math library header */

#include    <string.h>  /* Include string function header */

#include    <ctype.h>   /* Include character function header */

#include    <limits.h>  /* define LONG_MIN and LONG_MAX */

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2, _DWORD *a3, __int64 a4)
{
__int64 v4; // rax
__int64 v7; // [rsp+30h] [rbp-10h]
__int64 v8; // [rsp+38h] [rbp-8h]

if ( a1 >= 0 )
v4 = a1;
else
v4 = -a1;
v8 = v4;
v7 = a4 + 16;
*(_BYTE *)(a4 + 16) = 0;
*a3 = 0;
do
{
*(_BYTE *)--v7 = v8 % 10 + 48;
if ( a2 == ++*a3 )
{
*(_BYTE *)--v7 = 46;
++*a3;
a2 = 0;
}
v8 /= 10LL;
}
while ( v8 || a2 );
if ( a1 < 0 )
{
*(_BYTE *)--v7 = 45;
++*a3;
}
return v7;
}