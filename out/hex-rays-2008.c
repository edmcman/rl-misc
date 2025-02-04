#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <stdbool.h>

#include <stdarg.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2, int *a3)
{
int v3; // edx
__int64 result; // rax
unsigned int i; // [rsp+24h] [rbp-4h]

*a3 = 0;
for ( i = 0; ; ++i )
{
result = i;
if ( (int)i >= a2 )
break;
if ( *(_BYTE *)((int)i + a1) == 37 || *(_BYTE *)((int)i + a1) == 33 )
{
if ( *(_BYTE *)((int)i + 1LL + a1) == 42 )
v3 = *a3 + 2;
else
v3 = *a3 + 1;
*a3 = v3;
}
}
return result;
}