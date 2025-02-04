#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(_DWORD *a1, _DWORD *a2)
{
__int64 result; // rax

*a1 = *a2;
a1[1] = a2[1];
result = (unsigned int)a2[2];
a1[2] = result;
return result;
}