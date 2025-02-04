#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(signed int a1, signed int a2, _DWORD *a3, _DWORD *a4)
{
__int64 result; // rax
int v7; // [rsp+2Ch] [rbp-14h] BYREF
int v8; // [rsp+30h] [rbp-10h] BYREF
unsigned int v9; // [rsp+34h] [rbp-Ch]
unsigned __int64 v10; // [rsp+38h] [rbp-8h]

v10 = __readfsqword(0x28u);
if ( a1 )
{
v9 = func0((unsigned int)(a2 % a1), (unsigned int)a1, &v7, &v8);
*a3 = v8 - a2 / a1 * v7;
*a4 = v7;
result = v9;
}
else
{
*a3 = 0;
*a4 = 1;
result = (unsigned int)a2;
}
return result;
}