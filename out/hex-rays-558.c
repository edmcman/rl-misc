
# 1 
#include "defs.h"
__int64  func0(__int64 a1, float a2, float a3, float a4)
{
__int64 result; // rax
int i; // [rsp+20h] [rbp-4h]

for ( i = 0; i <= 2; ++i )
{
result = i;
*(float *)(a1 + 48 + 4LL * i) = (float)((float)(*(float *)(a1 + 32 + 4LL * i) * a4)
+ (float)((float)(*(float *)(a1 + 4LL * i) * a2)
+ (float)(*(float *)(a1 + 16 + 4LL * i) * a3)))
+ *(float *)(a1 + 48 + 4LL * i);
}
return result;
}