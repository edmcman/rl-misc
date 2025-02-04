#include <stdio.h>

#include <math.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, double a2)
{
__int64 result; // rax

*(double *)a1 = a2;
*(_QWORD *)(a1 + 8) = 0LL;
*(_QWORD *)(a1 + 16) = 0LL;
*(_QWORD *)(a1 + 24) = 0LL;
*(double *)(a1 + 32) = a2;
*(_QWORD *)(a1 + 40) = 0LL;
*(_QWORD *)(a1 + 48) = 0LL;
*(_QWORD *)(a1 + 56) = 0LL;
result = a1 + 48;
*(double *)(a1 + 64) = a2;
return result;
}