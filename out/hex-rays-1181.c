#include <math.h>

#include <memory.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, float a2, float a3, float a4, float a5, float a6, float a7)
{
__int64 result; // rax

*(float *)a1 = 2.0 / (float)(a3 - a2);
*(_DWORD *)(a1 + 4) = 0;
*(_DWORD *)(a1 + 8) = 0;
*(_DWORD *)(a1 + 12) = 0;
*(_DWORD *)(a1 + 16) = 0;
*(float *)(a1 + 20) = 2.0 / (float)(a5 - a4);
*(_DWORD *)(a1 + 24) = 0;
*(_DWORD *)(a1 + 28) = 0;
*(_DWORD *)(a1 + 32) = 0;
*(_DWORD *)(a1 + 36) = 0;
*(float *)(a1 + 40) = -2.0 / (float)(a7 - a6);
*(_DWORD *)(a1 + 44) = 0;
*(float *)(a1 + 48) = (float)-(float)(a3 + a2) / (float)(a3 - a2);
*(float *)(a1 + 52) = (float)-(float)(a5 + a4) / (float)(a5 - a4);
*(float *)(a1 + 56) = (float)-(float)(a7 + a6) / (float)(a7 - a6);
result = a1 + 60;
*(_DWORD *)(a1 + 60) = 1065353216;
return result;
}