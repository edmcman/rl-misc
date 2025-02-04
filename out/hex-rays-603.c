#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(signed int a1, signed int a2, _DWORD *a3, _DWORD *a4)
{
__int64 result; // rax

if ( a2 )
{
LODWORD(result) = func0((unsigned int)a2, (unsigned int)(a1 % a2), a4, a3);
*a4 -= *a3 * (a1 / a2);
result = (unsigned int)result;
}
else
{
*a3 = 1;
*a4 = 0;
result = (unsigned int)a1;
}
return result;
}