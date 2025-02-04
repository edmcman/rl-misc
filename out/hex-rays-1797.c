#include <stdio.h>

# 1 
#include "defs.h"
_BYTE * func0(int a1, __int64 a2, int a3, int a4)
{
_BYTE *result; // rax
int v7; // [rsp+18h] [rbp-Ch]

v7 = 0;
while ( a3 <= 31 )
{
result = (_BYTE *)((0x80000000 >> a3) & a1);
if ( (_DWORD)result )
{
result = (_BYTE *)(v7 + a2);
*result |= 1 << (7 - a4);
}
++a3;
if ( ++a4 > 7 )
{
a4 = 2;
++v7;
}
}
return result;
}