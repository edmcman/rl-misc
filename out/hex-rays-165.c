#include <stdlib.h>

# 1 
#include "defs.h"
float  func0(__int64 a1, __int64 a2, int a3)
{
int i; // [rsp+1Ch] [rbp-8h]
float v5; // [rsp+20h] [rbp-4h]

v5 = 0.0;
for ( i = 0; i < a3; ++i )
v5 = (float)(*(float *)(4LL * i + a2) * *(float *)(4LL * i + a1)) + v5;
return v5;
}