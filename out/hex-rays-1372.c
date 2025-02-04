#include <stdio.h>

#include <stdlib.h>

#include <assert.h>

# 1 
#include "defs.h"
__int64  func0(int a1, unsigned int a2, _DWORD *a3)
{
unsigned __int8 v4; // cf

v4 = _bittestandset(&a1, a2);
*a3 = a1;
return v4;
}