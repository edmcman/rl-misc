#include <math.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_QWORD * func0(_QWORD *a1, _QWORD *a2)
{
_QWORD *result; // rax

*a1 = 0x3FA999999999999ALL;
a1[1] = 0x3FE3333333333333LL;
a1[2] = 0x3FD4CCCCCCCCCCCDLL;
a1[3] = 0LL;
*a2 = 0x3FD3333333333333LL;
a2[1] = 0x3FF0000000000000LL;
a2[2] = 0LL;
a2[3] = 0x4042000000000000LL;
result = a2 + 4;
a2[4] = 0x405E000000000000LL;
return result;
}