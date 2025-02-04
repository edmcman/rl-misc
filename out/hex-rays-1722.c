#include <stdio.h>

#include <string.h>

#include <ctype.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2)
{
__int64 result; // rax
unsigned int i; // [rsp+18h] [rbp-4h]

for ( i = 0; ; ++i )
{
result = i;
if ( (int)i >= a2 )
break;
if ( *(char *)((int)i + a1) > 96 )
*(_BYTE *)((int)i + a1) -= 32;
}
return result;
}