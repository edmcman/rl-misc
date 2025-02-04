#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(int *a1, __int64 a2)
{
__int64 result; // rax
int i; // [rsp+1Ch] [rbp-4h]

for ( i = 0; *(_BYTE *)(i + a2); ++i )
{
*a1 = getchar();
if ( *a1 != *(char *)(i + a2) )
{
++a1[1];
break;
}
++a1[1];
}
result = *(unsigned __int8 *)(i + a2);
if ( !(_BYTE)result )
{
result = (unsigned int)(a1[1] - i);
a1[2] = result;
}
return result;
}