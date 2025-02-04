#include <stdio.h>

#include <string.h>

#include <math.h>

# 1 
#include "defs.h"
__int64  func0(float *a1, __int64 a2)
{
__int64 result; // rax
float v3; // [rsp+14h] [rbp-1Ch]
float v4; // [rsp+18h] [rbp-18h]
float v5; // [rsp+1Ch] [rbp-14h]
float v6; // [rsp+20h] [rbp-10h]

v3 = *a1;
v4 = a1[1];
v5 = a1[2];
v6 = a1[3];
*(float *)a2 = (float)(1.0 - (float)((float)(v5 * v5) + (float)(v5 * v5)))
- (float)((float)(v6 * v6) + (float)(v6 * v6));
*(float *)(a2 + 4) = (float)((float)(v4 + v4) * v5) - (float)((float)(v3 + v3) * v6);
*(float *)(a2 + 8) = (float)((float)(v3 + v3) * v5) + (float)((float)(v4 + v4) * v6);
*(_DWORD *)(a2 + 12) = 0;
*(float *)(a2 + 16) = (float)((float)(v3 + v3) * v6) + (float)((float)(v4 + v4) * v5);
*(float *)(a2 + 20) = (float)(1.0 - (float)((float)(v4 * v4) + (float)(v4 * v4)))
- (float)((float)(v6 * v6) + (float)(v6 * v6));
*(float *)(a2 + 24) = (float)((float)(v5 + v5) * v6) - (float)((float)(v3 + v3) * v4);
*(_DWORD *)(a2 + 28) = 0;
*(float *)(a2 + 32) = (float)((float)(v4 + v4) * v6) - (float)((float)(v3 + v3) * v5);
*(float *)(a2 + 36) = (float)((float)(v3 + v3) * v4) + (float)((float)(v5 + v5) * v6);
*(float *)(a2 + 40) = (float)(1.0 - (float)((float)(v4 * v4) + (float)(v4 * v4)))
- (float)((float)(v5 * v5) + (float)(v5 * v5));
*(_DWORD *)(a2 + 44) = 0;
*(_DWORD *)(a2 + 48) = 0;
*(_DWORD *)(a2 + 52) = 0;
*(_DWORD *)(a2 + 56) = 0;
result = a2 + 48;
*(_DWORD *)(a2 + 60) = 1065353216;
return result;
}