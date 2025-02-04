#include <stdio.h>

#include <stdlib.h>

#include <time.h>

# 1 
#include "defs.h"
__int64  func0(_DWORD *a1, unsigned int a2, int a3)
{
*a1 = a3;
while ( a3 != a1[a2] )
--a2;
return a2;
}