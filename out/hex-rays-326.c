






# 1 
#include "defs.h"
_QWORD * func0(_QWORD *a1, _BYTE *a2)
{
int v2; // ebx
__int64 v3; // r13
int v4; // er12
_QWORD *result; // rax
__int64 v7; // [rsp+18h] [rbp-20h]

v2 = 1345345333;
v3 = 7LL;
v4 = 305419889;
while ( *a2 )
{
if ( *a2 != 32 && *a2 != 9 )
{
v7 = (unsigned __int8)*a2;
v2 ^= (v2 << 8) + v7 * (v3 + (v2 & 0x3F));
v4 += v2 ^ (v4 << 8);
v3 += v7;
}
++a2;
}
*a1 = v2 & 0x7FFFFFFF;
result = a1 + 1;
a1[1] = v4 & 0x7FFFFFFF;
return result;
}