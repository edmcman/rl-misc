
# 1 
#include "defs.h"
int * func0(int *a1, int *a2, int *a3, int a4)
{
int *result; // rax
int v5; // [rsp+0h] [rbp-2Ch]
int v6; // [rsp+0h] [rbp-2Ch]
int v7; // [rsp+28h] [rbp-4h]
int v8; // [rsp+28h] [rbp-4h]

v5 = a4;
if ( a4 > 58 )
v5 = a4 + 1;
v6 = 4 * (v5 + 36466) - 1;
*a3 = v6 / 1461;
v7 = v6 % 1461;
if ( v6 % 1461 < 0 )
{
v7 += 1461;
--*a3;
}
v8 = 5 * (v7 / 4) + 2;
*a2 = v8 / 153;
*a1 = v8 % 153;
*a1 = *a1 / 5 + 1;
if ( *a2 > 9 )
{
*a2 -= 9;
++*a3;
}
else
{
*a2 += 3;
}
result = a3;
*a3 -= 100;
return result;
}