#include <time.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, int a2)
{
*a1 = (char)a2 / 10 + 48;
a1[1] = a2 % 10 + 48;
return a1 + 2;
}