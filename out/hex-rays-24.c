#include <assert.h>

# 1 
#include "defs.h"
__int64  func0(__int64 *a1)
{
__int64 result; // rax
__int64 v2; // [rsp+8h] [rbp-20h]
__int64 v3; // [rsp+10h] [rbp-18h]
__int64 v4; // [rsp+18h] [rbp-10h]
__int64 v5; // [rsp+20h] [rbp-8h]

v2 = *a1 / a1[1];
v3 = *a1 % a1[1];
if ( v3 < 0 )
{
if ( a1[1] > 0 )
{
v3 += a1[1];
--v2;
}
if ( a1[1] < 0 )
{
v3 -= a1[1];
++v2;
}
}
v4 = a1[2] - v2 * a1[3];
v5 = a1[4] - v2 * a1[5];
*a1 = a1[1];
a1[1] = v3;
a1[2] = a1[3];
a1[3] = v4;
a1[4] = a1[5];
result = v5;
a1[5] = v5;
return result;
}