#include <math.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
float v2; // xmm0_4
float v3; // [rsp+Ch] [rbp-Ch]
int v4; // [rsp+10h] [rbp-8h]
int i; // [rsp+14h] [rbp-4h]
int j; // [rsp+14h] [rbp-4h]

v3 = 0.0;
v4 = -1;
for ( i = 0; i <= 3; ++i )
{
if ( *(float *)(4LL * i + a1) > v3 )
{
v3 = *(float *)(4LL * i + a1);
v4 = i;
}
}
if ( v4 < 0 )
return 0xFFFFFFFFLL;
for ( j = 0; j <= 3; ++j )
{
if ( v4 != j )
{
v2 = 0.1 * v3;
if ( *(float *)(4LL * j + a1) > v2 )
return 0xFFFFFFFFLL;
}
}
return (unsigned int)v4;
}