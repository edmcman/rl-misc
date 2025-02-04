
# 1 
#include "defs.h"
__int64  func0(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
unsigned __int64 v4; // [rsp+8h] [rbp-20h]
__int64 v6; // [rsp+18h] [rbp-10h]
unsigned __int64 v7; // [rsp+20h] [rbp-8h]

v4 = a2;
v6 = 0LL;
v7 = 1LL;
if ( !a2 )
return 0LL;
while ( (v4 & 0x80000000) == 0LL )
{
v4 *= 2LL;
v7 *= 2LL;
}
while ( v7 )
{
if ( v4 <= a1 )
{
a1 -= v4;
v6 += v7;
}
v4 >>= 1;
v7 >>= 1;
}
if ( a3 )
*a3 = a1;
return v6;
}