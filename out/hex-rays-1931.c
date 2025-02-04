#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_BOOL8  func0(int a1, int a2, _DWORD *a3)
{
*a3 = a2 * a1;
return (unsigned __int64)(a2 * (__int64)a1) >> 32 == 0;
}