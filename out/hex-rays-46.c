#include <stdio.h>

# 1 
#include "defs.h"
float  func0(int a1, __int64 a2, float a3)
{
int i; // [rsp+14h] [rbp-Ch]
float v5; // [rsp+18h] [rbp-8h]
float v6; // [rsp+1Ch] [rbp-4h]

v5 = 0.0;
v6 = 1.0;
for ( i = 0; i <= a1; ++i )
{
v5 = (float)(*(float *)(4LL * i + a2) * v6) + v5;
v6 = v6 * a3;
}
return v5;
}