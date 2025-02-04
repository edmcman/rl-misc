#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(_DWORD *a1, _DWORD *a2, int a3, _DWORD *a4)
{
__int64 result; // rax
unsigned int i; // [rsp+2Ch] [rbp-4h]

*a2 = *a4;
*a1 = *a2;
for ( i = 0; ; ++i )
{
result = i;
if ( (int)i >= a3 )
break;
if ( a4[i] <= *a2 )
*a2 = a4[i];
if ( a4[i] >= *a1 )
*a1 = a4[i];
}
return result;
}