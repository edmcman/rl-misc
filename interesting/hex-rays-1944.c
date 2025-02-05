#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(unsigned int a1, __int64 a2)
{
__int64 result; // rax
char v4; // [rsp+17h] [rbp-9h]
char v5; // [rsp+17h] [rbp-9h]
unsigned int v6; // [rsp+18h] [rbp-8h]
unsigned int v7; // [rsp+1Ch] [rbp-4h]

*(_BYTE *)(a2 + 8) = 0;
v6 = 7;
v7 = 8;
while ( 1 )
{
result = v7--;
if ( !(_DWORD)result )
break;
v4 = a1 & 0xF;
if ( (a1 & 0xF) <= 9 )
v5 = v4 + 48;
else
v5 = v4 + 55;
*(_BYTE *)(a2 + v6--) = v5;
a1 >>= 4;
}
return result;
}