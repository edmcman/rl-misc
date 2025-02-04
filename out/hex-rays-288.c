#include <stdio.h>

#include <math.h>

#include <complex.h>

# 1 
#include "defs.h"
__int64  func0(int a1, _DWORD *a2)
{
__int64 result; // rax
unsigned int v3; // [rsp+14h] [rbp-Ch]
double i; // [rsp+18h] [rbp-8h]

if ( a1 <= 0 )
return 2LL;
if ( a1 == 1 )
{
*a2 = 0;
result = 0LL;
}
else
{
v3 = 1;
*a2 = 0;
for ( i = (double)a1; i >= 2.0; i = i / 2.0 )
{
++*a2;
if ( i == 2.0 )
v3 = 0;
}
result = v3;
}
return result;
}