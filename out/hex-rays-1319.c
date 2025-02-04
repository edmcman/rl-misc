#include <stdlib.h>

#include <stdio.h>

#include <unistd.h>

#include <string.h>

#include <stdbool.h>

#include <math.h>

# 1 
#include "defs.h"
__int64  func0(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
__int64 result; // rax
int i; // [rsp+24h] [rbp-4h]
signed int j; // [rsp+24h] [rbp-4h]

*a4 = 0;
*a3 = *a4;
for ( i = 0; i < a1; ++i )
{
if ( !(i % 3) )
++*a3;
}
for ( j = 0; ; ++j )
{
result = (unsigned int)j;
if ( j >= a2 )
break;
if ( !(j % 3) )
++*a4;
}
return result;
}