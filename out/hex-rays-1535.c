#include <math.h>

# 1 
#include "defs.h"
float  func0(__int64 a1, float a2)
{
float v3; // [rsp+1Ch] [rbp-4h]

v3 = (float)(*(float *)(a1 + 24) * *(float *)(a1 + 12))
+ (float)((float)(*(float *)(a1 + 4) * (float)(a2 - (float)(*(float *)a1 * *(float *)(a1 + 16))))
+ (float)(*(float *)(a1 + 20) * *(float *)(a1 + 8)));
*(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 32);
*(float *)(a1 + 32) = a2;
*(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 20);
*(float *)(a1 + 20) = v3;
return v3;
}