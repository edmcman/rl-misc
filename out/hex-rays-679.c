#include <math.h>

# 1 
#include "defs.h"
__int64  func0(double *a1, double *a2)
{
__int64 result; // rax
double v3; // [rsp+10h] [rbp-10h]
double v4; // [rsp+18h] [rbp-8h]

v3 = a1[1];
v4 = *a1;
if ( v3 >= 0.0000001 || v3 <= -0.0000001 )
{
*a2 = -v4 / v3;
result = 1LL;
}
else if ( v4 >= 0.0000001 || v4 <= -0.0000001 )
{
result = 0LL;
}
else
{
result = 4LL;
}
return result;
}