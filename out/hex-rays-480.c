#include <stdlib.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, int a2)
{
_DWORD *result; // rax

*a1 = 3 * a2;
a1[1] = 3 * a2 + 1;
a1[2] = 2 * (a2 + 1);
a1[3] = a2 + 3;
a1[4] = 3;
a1[5] = 3 - a2;
a1[6] = -2 * a2 + 2;
a1[7] = -3 * a2 + 1;
a1[8] = -3 * a2;
a1[9] = -3 * a2 - 1;
a1[10] = -2 * (a2 + 1);
a1[11] = -3 - a2;
a1[12] = -3;
a1[13] = a2 - 3;
a1[14] = 2 * (a2 - 1);
result = a1 + 15;
a1[15] = 3 * a2 - 1;
return result;
}