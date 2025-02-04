#include <malloc.h>

#include <stdlib.h>

#include <string.h>

#include <memory.h>

#include <math.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, __int64 a2, __int64 a3, float *a4)
{
float v5; // [rsp+28h] [rbp-38h]
float v6; // [rsp+2Ch] [rbp-34h]
__int64 i; // [rsp+30h] [rbp-30h]
__int64 k; // [rsp+30h] [rbp-30h]
__int64 j; // [rsp+38h] [rbp-28h]
float v10; // [rsp+4Ch] [rbp-14h]
float v11; // [rsp+50h] [rbp-10h]
float v12; // [rsp+54h] [rbp-Ch]
unsigned __int64 v13; // [rsp+58h] [rbp-8h]

v13 = __readfsqword(0x28u);
for ( i = 0LL; i <= 2; ++i )
{
*(&v10 + i) = 0.0;
for ( j = 4 * (i + 1) + 312 - a3 - 1; j <= 311; j += 2LL )
*(&v10 + i) = (float)(*(float *)(4 * (j - 4 * i) + a1) * *(float *)(4 * j + a1)) + *(&v10 + i);
}
v5 = 0.0;
v6 = 0.0;
*a4 = 0.0;
a4[1] = 0.0;
if ( v10 > 1.0e-10 )
{
*a4 = v11 / v10;
a4[1] = (float)(v12 - (float)(v11 * *a4)) / (float)(v10 - (float)(v11 * *a4));
v5 = *a4 - (float)(a4[1] * *a4);
v6 = a4[1];
}
for ( k = 312 - a3; k <= 311; ++k )
*(float *)(4 * k + a2) = (float)(*(float *)(4 * k + a1) - (float)(*(float *)(4 * k - 16 + a1) * v5))
- (float)(*(float *)(4 * k - 32 + a1) * v6);
return __readfsqword(0x28u) ^ v13;
}