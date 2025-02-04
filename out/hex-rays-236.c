#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
__int64 result; // rax

while ( 1 )
{
result = (unsigned int)a2;
if ( a2 >= a4 || a2 > 9 )
break;
*(_DWORD *)(4LL * a2 + 4LL * a5 + a1) = *(_DWORD *)(a3 + 4LL * a2);
++a2;
}
return result;
}