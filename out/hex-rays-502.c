
# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
__int64 result; // rax

*(_DWORD *)a2 = 1065353216;
*(float *)(a2 + 4) = -*(float *)(a1 + 8);
*(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 4);
*(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 8);
*(_DWORD *)(a2 + 16) = 1065353216;
*(float *)(a2 + 20) = -*(float *)a1;
*(float *)(a2 + 24) = -*(float *)(a1 + 4);
*(_DWORD *)(a2 + 28) = *(_DWORD *)a1;
result = a2 + 32;
*(_DWORD *)(a2 + 32) = 1065353216;
return result;
}