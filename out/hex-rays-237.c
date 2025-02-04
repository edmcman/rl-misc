#include <math.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_QWORD * func0(_QWORD *a1, _QWORD *a2)
{
_QWORD *result; // rax

*a1 = 0xC000000000000000LL;
a1[1] = 0LL;
result = a2;
*a2 = 0x3FF0000000000000LL;
return result;
}