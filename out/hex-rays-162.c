#include <math.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
*(_DWORD *)a2 = *(_DWORD *)a1;
*(float *)(a2 + 4) = -*(float *)(a1 + 4);
*(float *)(a2 + 8) = -*(float *)(a1 + 8);
*(float *)(a2 + 12) = -*(float *)(a1 + 12);
return a2;
}