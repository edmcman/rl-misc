#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(unsigned int a1, unsigned int a2, int a3, _DWORD *a4)
{
__int64 result; // rax

if ( (int)a1 <= (int)a2 )
{
*a4 = a3;
result = a2;
}
else
{
*a4 = 0;
result = a1;
}
return result;
}