
# 1 
#include "defs.h"
_DWORD * func0(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
_DWORD *result; // rax
int v7; // [rsp+1Ch] [rbp-4h]
int v8; // [rsp+1Ch] [rbp-4h]

for ( *a3 = a2 - 1; a1 >= (a2 - *a3) * (a2 - *a3); --*a3 )
a1 -= (a2 - *a3) * (a2 - *a3);
if ( a1 >= (a2 - *a3 - 1) * (a2 - *a3 - 1) )
{
v7 = a1 - (a2 - *a3 - 1) * (a2 - *a3 - 1);
if ( v7 >= a2 - *a3 - 1 )
{
v8 = v7 - (a2 - *a3 - 1);
if ( v8 >= a2 - *a3 - 1 )
*a5 = *a3;
else
*a5 = *a3 + v8 + 1;
result = a4;
*a4 = *a3;
}
else
{
*a5 = *a3;
result = a4;
*a4 = *a3 + v7 + 1;
}
}
else
{
*a4 = a1 / (a2 - *a3 - 1) + *a3 + 1;
result = a5;
*a5 = a1 % (a2 - *a3 - 1) + *a3 + 1;
}
return result;
}