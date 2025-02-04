
# 1 
#include "defs.h"
float * func0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
float *result; // rax
int i; // [rsp+24h] [rbp-1Ch]
int j; // [rsp+28h] [rbp-18h]
float v7; // [rsp+2Ch] [rbp-14h]
float v8; // [rsp+2Ch] [rbp-14h]
int v9; // [rsp+30h] [rbp-10h]
int v10; // [rsp+34h] [rbp-Ch]
float v11; // [rsp+38h] [rbp-8h]
float v12; // [rsp+3Ch] [rbp-4h]

for ( i = 0; i <= 63; ++i )
{
v9 = i % 8;
v10 = i % 4;
v7 = *(float *)(4LL * i + a1);
for ( j = 0; j <= 3; ++j )
{
v11 = *(float *)(a4 + 32LL * v9 + 8LL * j);
v12 = *(float *)(a4 + 32LL * v9 + 8LL * j + 4);
v8 = v7
- (float)((float)(v11 * *(float *)(a3 + ((__int64)v10 << 6) + 16LL * j))
+ (float)(*(float *)(a3 + ((__int64)v10 << 6) + 16LL * j + 4) * v12));
*(float *)(a4 + 32LL * v9 + 8LL * j) = v12;
*(float *)(a4 + 32LL * v9 + 8LL * j + 4) = v8;
v7 = (float)((float)(*(float *)(a3 + ((__int64)v10 << 6) + 16LL * j + 12) * v12)
+ (float)(*(float *)(a3 + ((__int64)v10 << 6) + 16LL * j + 8) * v11))
+ v8;
}
result = (float *)(4LL * i + a2);
*result = v7;
}
return result;
}