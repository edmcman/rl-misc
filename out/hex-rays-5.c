
# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
__int64 result; // rax

*(float *)(a1 + 1024) = *(float *)(a1 - 1020) + *(float *)(a1 + 1020);
result = a2 + 256;
*(double *)(a2 + 256) = *(double *)(a2 - 1016) + *(double *)(a2 + 1016);
return result;
}