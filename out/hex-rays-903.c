
# 1 
#include "defs.h"
float  func0(__int64 a1, int a2, float a3)
{
int i; // [rsp+18h] [rbp-8h]
int v5; // [rsp+1Ch] [rbp-4h]

v5 = 0;
for ( i = 0; i < a2; ++i )
{
if ( *(float *)(4LL * i + a1) == a3 )
++v5;
}
return (float)v5;
}