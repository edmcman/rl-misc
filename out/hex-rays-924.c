
# 1 
#include "defs.h"
float  func0(float *a1, float *a2, int a3)
{
float *v3; // rax
float v4; // xmm1_4
float *v5; // rax
int i; // [rsp+1Ch] [rbp-8h]
float v10; // [rsp+20h] [rbp-4h]

v10 = 0.0;
for ( i = 0; i <= a3; ++i )
{
v3 = a1++;
v4 = *v3;
v5 = a2++;
v10 = (float)(*v5 * v4) + v10;
}
return v10;
}