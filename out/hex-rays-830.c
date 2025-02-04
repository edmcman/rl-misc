#include <math.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
*(_QWORD *)a2 = *(_QWORD *)a1;
*(double *)(a2 + 8) = -*(double *)(a1 + 8);
*(double *)(a2 + 16) = -*(double *)(a1 + 16);
*(double *)(a2 + 24) = -*(double *)(a1 + 24);
return a2;
}