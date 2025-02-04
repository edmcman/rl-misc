#include <stdio.h>

#include <stdlib.h>

#include <stdbool.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2, int *a3)
{
if ( *a3 > 19 )
return 0LL;
*(_DWORD *)(a1 + 4LL * a3[1] - 4) = a2;
return 1LL;
}