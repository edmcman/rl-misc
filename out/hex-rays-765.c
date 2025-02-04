#include <math.h>

#include <stdio.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, __int64 a10, __int64 a11, __int64 a12, __int64 a13, __int64 a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22)
{
__int64 result; // rax

*(float *)a1 = a2;
*(float *)(a1 + 16) = a6;
*(_DWORD *)(a1 + 32) = a15;
*(_DWORD *)(a1 + 48) = a19;
*(float *)(a1 + 4) = a3;
*(float *)(a1 + 20) = a7;
*(_DWORD *)(a1 + 36) = a16;
*(_DWORD *)(a1 + 52) = a20;
*(float *)(a1 + 8) = a4;
*(float *)(a1 + 24) = a8;
*(_DWORD *)(a1 + 40) = a17;
*(_DWORD *)(a1 + 56) = a21;
*(float *)(a1 + 12) = a5;
*(float *)(a1 + 28) = a9;
*(_DWORD *)(a1 + 44) = a18;
result = a1 + 60;
*(_DWORD *)(a1 + 60) = a22;
return result;
}