










# 1 
#include "defs.h"
unsigned __int64  func0(unsigned __int64 a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
unsigned __int64 result; // rax
unsigned __int16 i; // [rsp+1Eh] [rbp-Ah]
unsigned __int16 j; // [rsp+1Eh] [rbp-Ah]
unsigned __int64 v6; // [rsp+20h] [rbp-8h]
unsigned __int64 v7; // [rsp+20h] [rbp-8h]

v6 = a1;
if ( a1 )
{
for ( i = 0; i <= 0x1Fu && v6 == (v6 & 0x7FFFFFFF); ++i )
v6 *= 2LL;
*a2 = i;
v7 = a1;
for ( j = 0; j <= 0x1Fu && v7 == (v7 & 0xFFFFFFFFFFFFFFFELL); ++j )
v7 >>= 1;
*a3 = j;
result = v7;
}
else
{
*a2 = 0;
*a3 = 0;
result = 0LL;
}
return result;
}