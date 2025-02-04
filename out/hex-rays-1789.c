#include <stdlib.h>

#include <stdio.h>

#include <math.h>

# 1 
#include "defs.h"
double  func0(int a1, __int64 a2, __int64 a3)
{
int i; // [rsp+1Ch] [rbp-Ch]
double v5; // [rsp+20h] [rbp-8h]

v5 = 0.0;
for ( i = 0; i < a1; ++i )
v5 = (float)(*(float *)(4LL * i + a3) * *(float *)(4LL * i + a2)) + v5;
return v5;
}