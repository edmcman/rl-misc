#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(unsigned int *a1, char a2)
{
*a1 &= ~(1 << a2);
return *a1;
}