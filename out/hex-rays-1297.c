#include <math.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_QWORD * func0(_QWORD *a1, _QWORD *a2)
{
_QWORD *result; // rax

*a1 = 0x3F847AE147AE147BLL;
a1[1] = 0x3FE999999999999ALL;
a1[2] = 0x3F847AE147AE147BLL;
a1[3] = 0xC055C00000000000LL;
*a2 = 0xC04E000000000000LL;
a2[1] = 0x3FB3333333333333LL;
a2[2] = 0x4028000000000000LL;
a2[3] = 0x4044000000000000LL;
result = a2 + 4;
a2[4] = 0x4079000000000000LL;
return result;
}