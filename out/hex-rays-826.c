
# 1 
#include "defs.h"
_BOOL8  func0(unsigned __int64 *a1)
{
_BOOL4 v1; // ecx

v1 = (a1[1] * (unsigned __int128)*a1) >> 64 != 0;
*(_OWORD *)a1 = a1[1] * (unsigned __int128)*a1;
return v1;
}