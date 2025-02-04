#include <string.h>

#include <math.h>

# 1 
#include "defs.h"
__int64  func0(char a1, int a2, int a3, char a4, int a5, int a6, int a7, int a8, __int64 a9, int a10, int a11, char a12, int a13, int a14, int a15, int a16, _DWORD *a17, _DWORD *a18)
{
if ( (a1 & 3) != 0
|| (a4 & 3) != 0
|| (a9 & 3) != 0
|| (a12 & 3) != 0
|| a2 <= 0
|| a3 <= 0
|| a10 <= 0
|| a11 <= 0
|| a5 < 0
|| a6 < 0
|| a7 <= 0
|| a8 <= 0
|| a13 < 0
|| a14 < 0
|| a15 <= 0
|| a16 <= 0
|| a2 < a5 + a7
|| a3 < a6 + a8
|| a10 < a13 + a15
|| a11 < a14 + a16 )
{
return 0LL;
}
if ( a7 == a15 )
{
*a17 = 1;
}
else
{
if ( a7 != 2 * a15 )
return 0LL;
*a17 = 2;
}
if ( a8 == a16 )
{
*a18 = 1;
return 1LL;
}
if ( a8 == 2 * a16 )
{
*a18 = 2;
return 1LL;
}
return 0LL;
}