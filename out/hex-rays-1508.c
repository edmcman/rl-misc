
# 1 
#include "defs.h"
__int64  func0(__int64 a1, float a2)
{
__int64 v2; // rdx
__int64 result; // rax
float v4; // [rsp+10h] [rbp-Ch]
int i; // [rsp+14h] [rbp-8h]

v4 = 1.0 / a2;
for ( i = 1; i <= 7; ++i )
{
v2 = 4LL * i;
result = v2 + a1;
*(float *)(v2 + a1) = *(float *)(v2 + a1) * v4;
v4 = v4 * (float)(1.0 / a2);
}
return result;
}