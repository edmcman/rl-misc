#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <time.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
__int64 result; // rax

*(_QWORD *)a2 = 0LL;
*(double *)(a2 + 8) = -*(double *)(a1 + 16);
*(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 8);
*(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 16);
*(_QWORD *)(a2 + 32) = 0LL;
*(double *)(a2 + 40) = -*(double *)a1;
*(double *)(a2 + 48) = -*(double *)(a1 + 8);
*(_QWORD *)(a2 + 56) = *(_QWORD *)a1;
result = a2 + 64;
*(_QWORD *)(a2 + 64) = 0LL;
return result;
}