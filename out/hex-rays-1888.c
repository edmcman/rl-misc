#include <stdio.h>

# 1 
#include "defs.h"
unsigned __int64  func0(int a1, int *a2)
{
unsigned __int64 result; // rax

if ( (a1 & 1) != 0 )
{
*a2 = a1 / 2 + 16;
result = (unsigned int)(a1 / 2);
a2[1] = result;
}
else
{
*a2 = a1 / 2;
result = (unsigned __int64)(a2 + 1);
a2[1] = a1 / 2 + 16;
}
return result;
}