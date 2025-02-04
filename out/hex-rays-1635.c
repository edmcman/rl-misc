#include <math.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, double a2, double a3, double a4)
{
__int64 result; // rax

*(_QWORD *)a1 = 0LL;
*(double *)(a1 + 8) = -a4;
*(double *)(a1 + 16) = a3;
*(double *)(a1 + 24) = a4;
*(_QWORD *)(a1 + 32) = 0LL;
*(double *)(a1 + 40) = -a2;
*(_QWORD *)(a1 + 48) = *(_QWORD *)&a3 ^ 0x8000000000000000LL;
*(double *)(a1 + 56) = a2;
result = a1 + 48;
*(_QWORD *)(a1 + 64) = 0LL;
return result;
}