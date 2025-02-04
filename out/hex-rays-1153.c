#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(int a1, _DWORD *a2, int *a3)
{
__int64 result; // rax

*a3 = a1 >> 1;
if ( a1 % 3 )
result = (unsigned int)(a1 / 3 + 1);
else
result = (unsigned int)(a1 / 3);
*a2 = result;
return result;
}