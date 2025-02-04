#include <math.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, __int64 a3)
{
__int64 result; // rax

*(_QWORD *)a3 = *(_QWORD *)(a2 + 8);
result = a3 + 8;
*(double *)(a3 + 8) = *(double *)a2 * (-1.0 * 1.0);
return result;
}