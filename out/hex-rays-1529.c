#include <stdio.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _DWORD *a2)
{
_BYTE *result; // rax

if ( *a1 == 45 )
{
*a2 = -1;
result = a1 + 1;
}
else
{
*a2 = 1;
result = a1;
}
return result;
}