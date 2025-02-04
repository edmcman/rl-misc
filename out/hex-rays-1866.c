
# 1 
#include "defs.h"
_QWORD * func0(_QWORD *a1)
{
_QWORD *result; // rax

*a1 = 0x3FF0000000000000LL;
a1[1] = 0LL;
a1[2] = 0LL;
result = a1 + 3;
a1[3] = 0LL;
return result;
}