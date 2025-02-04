#include <stdlib.h>

#include <stdio.h>

#include <time.h>

# 1 
#include "defs.h"
__int64  func0(int *a1, int a2)
{
__int64 result; // rax
int v3; // [rsp+14h] [rbp-8h]
int v4; // [rsp+18h] [rbp-4h]

if ( a2 > 1 )
{
v3 = 1;
*a1 = a1[1];
while ( 1 )
{
v4 = 2 * v3;
if ( 2 * v3 > a2 )
break;
if ( v4 < a2 && a1[v4 + 1] > a1[v4] )
++v4;
if ( *a1 >= a1[v4] )
break;
a1[v3] = a1[v4];
v3 = v4;
}
result = (unsigned int)*a1;
a1[v3] = result;
}
return result;
}