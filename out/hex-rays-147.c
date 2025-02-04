#include <math.h>

# 1 
#include "defs.h"
__int64  func0(_DWORD *a1, int *a2, __int64 a3, __int64 a4, int *a5)
{
lsav_3034 = *(_DWORD *)(4LL * *a2 + a4 - 4);
*(_DWORD *)(a4 - 4 + 4LL * *a2) = *a5;
*(_DWORD *)(a3 - 4 + 4LL * *a5) = *a1;
*(_DWORD *)(a4 - 4 + 4LL * (*a5)++) = lsav_3034;
return 0LL;
}