#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
__int64 result; // rax
int i; // [rsp+14h] [rbp-4h]

for ( i = 0; ; ++i )
{
result = *(unsigned __int8 *)(i + a1);
if ( !(_BYTE)result )
break;
if ( *(char *)(i + a1) <= 96 || *(char *)(i + a1) > 122 )
{
if ( *(char *)(i + a1) > 64 && *(char *)(i + a1) <= 90 )
*(_BYTE *)(i + a1) = -101 - *(_BYTE *)(i + a1);
}
else
{
*(_BYTE *)(i + a1) = -37 - *(_BYTE *)(i + a1);
}
}
return result;
}