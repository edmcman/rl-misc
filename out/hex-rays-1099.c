#include <ctype.h>

#include <regex.h>

#include <stdlib.h>

#include <string.h>

#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(unsigned __int8 a1, __int64 a2, _DWORD *a3)
{
__int64 result; // rax

result = (unsigned int)*a3;
if ( (int)result <= 99 )
{
++*a3;
result = a1;
*(_BYTE *)(a2 + (int)*a3) = a1;
}
return result;
}