#include <math.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, float a2, float a3, float a4)
{
__int64 result; // rax

*(_DWORD *)a1 = 1065353216;
*(_DWORD *)(a1 + 16) = 0;
*(_DWORD *)(a1 + 32) = 0;
*(float *)(a1 + 48) = a2;
*(_DWORD *)(a1 + 4) = 0;
*(_DWORD *)(a1 + 20) = 1065353216;
*(_DWORD *)(a1 + 36) = 0;
*(float *)(a1 + 52) = a3;
*(_DWORD *)(a1 + 8) = 0;
*(_DWORD *)(a1 + 24) = 0;
*(_DWORD *)(a1 + 40) = 1065353216;
*(float *)(a1 + 56) = a4;
*(_DWORD *)(a1 + 12) = 0;
*(_DWORD *)(a1 + 28) = 0;
*(_DWORD *)(a1 + 44) = 0;
result = a1 + 60;
*(_DWORD *)(a1 + 60) = 1065353216;
return result;
}