#include <curses.h>

# 1 
#include "defs.h"
__int64  func0(_WORD *a1, int a2, int a3)
{
if ( a3 < 0 || a3 > (__int16)a1[3] || a2 < (__int16)a1[24] || a2 > (__int16)a1[25] )
return 0xFFFFFFFFLL;
a1[1] = a3;
*a1 = a2;
return 0LL;
}