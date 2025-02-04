






# 1 
#include "defs.h"
float * func0(int a1, __int64 a2)
{
float *result; // rax
float v3; // [rsp+2Ch] [rbp-4h]

if ( a1 >> 1 == 2 )
{
v3 = (float)(*(float *)(a2 + 4) * (float)(0.9238795 * 0.70710677))
- (float)(*(float *)(a2 + 12) * (float)(0.38268343 * 0.70710677));
*(float *)(a2 + 4) = (float)(*(float *)(a2 + 12) * (float)(0.9238795 * 0.70710677))
+ (float)(*(float *)(a2 + 4) * (float)(0.38268343 * 0.70710677));
*(float *)(a2 + 12) = v3;
}
result = (float *)(4LL * (a1 >> 1) + a2);
*result = *result * 0.70710677;
return result;
}