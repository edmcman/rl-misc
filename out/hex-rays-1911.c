#include <math.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
__int64 result; // rax

*(double *)a1 = -*(double *)a2;
*(double *)(a1 + 8) = -*(double *)(a2 + 8);
*(double *)(a1 + 16) = -*(double *)(a2 + 16);
result = a2;
*(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
return result;
}