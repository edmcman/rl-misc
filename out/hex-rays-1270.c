
# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1)
{
_DWORD *result; // rax

*a1 = 1;
a1[1] = 5;
a1[2] = 6;
a1[3] = 4;
a1[4] = 7;
a1[5] = 8;
a1[6] = 9;
a1[7] = 0;
a1[8] = 2;
result = a1 + 9;
a1[9] = 3;
return result;
}