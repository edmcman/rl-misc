#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
unsigned __int64 result; // rax
unsigned __int64 i; // [rsp+20h] [rbp-8h]

for ( i = 0LL; ; ++i )
{
result = i;
if ( i >= a3 )
break;
*(_WORD *)(2 * i + a2) = (*(_WORD *)(2 * i + a1) << 8) | HIBYTE(*(_WORD *)(2 * i + a1));
}
return result;
}