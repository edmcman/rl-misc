#include <stdio.h>

# 1 
#include "defs.h"
unsigned __int64  func0(_DWORD *a1, _DWORD *a2)
{
unsigned __int64 result; // rax

result = (unsigned int)*a2;
if ( *a1 > (int)result )
{
result = (unsigned __int64)a2;
*a2 = *a1;
}
return result;
}