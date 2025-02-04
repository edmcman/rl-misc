#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_DWORD * func0(int a1, _DWORD *a2, _DWORD *a3)
{
int v3; // ebx
_DWORD *result; // rax
int v5; // [rsp+1Ch] [rbp-14h]

v5 = abs32(a1);
v3 = 0;
while ( v5 )
{
v5 >>= 1;
++v3;
}
*a2 = v3;
result = a3;
*a3 = (((a1 >> 31) & 1) << v3) + a1 - ((a1 >> 31) & 1);
return result;
}