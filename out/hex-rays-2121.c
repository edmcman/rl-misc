#include <stdio.h>

# 1 
#include "defs.h"
float  func0(__int64 a1)
{
int i; // [rsp+8h] [rbp-10h]
float v3; // [rsp+Ch] [rbp-Ch]
float v4; // [rsp+10h] [rbp-8h]
float v5; // [rsp+14h] [rbp-4h]

v3 = 0.0;
v4 = 0.0;
v5 = 10.0;
for ( i = 0; i <= 7; ++i )
{
v3 = *(float *)(4LL * i + a1) + v3;
if ( *(float *)(4LL * i + a1) > v4 )
v4 = *(float *)(4LL * i + a1);
if ( v5 > *(float *)(4LL * i + a1) )
v5 = *(float *)(4LL * i + a1);
}
return (float)((float)(v3 - v4) - v5) / 6.0;
}