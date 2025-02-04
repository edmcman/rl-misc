#include <math.h> /* for log10() and floor() */

#include <stdio.h> /* for printf() */

# 1 
#include "defs.h"
__int64  func0(unsigned __int64 a1, __int64 a2, _QWORD *a3)
{
__int64 v5; // [rsp+20h] [rbp-18h]
char v6; // [rsp+30h] [rbp-8h]

v5 = a2 + 64;
*(_BYTE *)(a2 + 64) = 0;
do
{
v6 = a1;
a1 /= 0xAuLL;
*(_BYTE *)--v5 = v6 - 10 * a1 + 48;
}
while ( a1 );
*a3 = a2 + 64 - v5;
return v5;
}