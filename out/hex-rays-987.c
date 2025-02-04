#include <stdio.h>

# 1 
#include "defs.h"
int * func0(int *a1, int *a2)
{
int *result; // rax
int v3; // [rsp+1Ch] [rbp-4h]

if ( *a2 )
{
v3 = 0;
if ( *a2 < 0 )
{
v3 = 1;
*a2 = -*a2;
}
while ( (*a2 & 0xFF800000) == 0 )
{
*a2 *= 2;
--*a1;
}
while ( 1 )
{
result = (int *)(*a2 & 0xFF000000);
if ( !(_DWORD)result )
break;
*a2 >>= 1;
++*a1;
}
if ( v3 )
{
result = a2;
*a2 = -*a2;
}
}
else
{
result = a1;
*a1 = 0;
}
return result;
}