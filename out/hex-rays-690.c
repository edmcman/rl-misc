#include <stdlib.h>

# 1 
#include "defs.h"
float  func0(__int64 a1, int a2, int a3, int a4, int a5)
{
float result; // xmm0_4
int v6; // [rsp+4h] [rbp-18h]
int v7; // [rsp+8h] [rbp-14h]

v7 = a4;
v6 = a5;
if ( a4 < 0 )
v7 = 0;
if ( a5 < 0 )
v6 = 0;
if ( v7 < a2 && v6 < a3 )
result = *(float *)(4LL * (a2 * v6 + v7) + a1);
return result;
}