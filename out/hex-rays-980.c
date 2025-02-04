#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(unsigned int a1, unsigned int a2, _DWORD *a3)
{
__int64 result; // rax

if ( (int)a1 <= (int)a2 )
{
*a3 = 1;
result = a2;
}
else
{
*a3 = 0;
result = a1;
}
return result;
}