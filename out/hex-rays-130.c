#include <stdlib.h> */

#include <stdio.h>

#include <string.h>

# 1 
#include "defs.h"
_DWORD * func0(int *a1, _DWORD *a2)
{
int v2; // ebx
int v3; // er12
int v4; // eax
int v5; // er14
int v6; // eax
int v7; // er13
_DWORD *result; // rax

v2 = *a1;
v3 = *a2;
if ( (unsigned __int8)*a1 > 0x5Eu )
v4 = 176;
else
v4 = 112;
v5 = v4;
if ( (v2 & 1) != 0 )
{
if ( (unsigned __int8)v3 <= 0x5Fu )
v6 = 31;
else
v6 = 32;
}
else
{
v6 = 126;
}
v7 = v6;
*a1 = v5 + (((unsigned __int8)v2 + 1) >> 1);
result = a2;
*a2 = v7 + (unsigned __int8)v3;
return result;
}