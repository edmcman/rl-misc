#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
__int64 result; // rax
int i; // [rsp+10h] [rbp-8h]

for ( i = 0; ; ++i )
{
result = *(unsigned __int8 *)(i + a1);
if ( !(_BYTE)result )
break;
if ( *(char *)(i + a1) > 96 && *(char *)(i + a1) <= 122 )
*(_BYTE *)(i + a1) -= 32;
}
return result;
}