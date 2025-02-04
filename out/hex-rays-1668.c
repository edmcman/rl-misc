#include <stdio.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, _BYTE *a2)
{
_BYTE *v2; // rdx
_BYTE *v3; // rax
__int64 result; // rax

do
{
v2 = a2++;
v3 = a1++;
*v3 = *v2;
result = (unsigned __int8)*v3;
}
while ( (_BYTE)result );
return result;
}