#include <assert.h>

# 1 
#include "defs.h"
_QWORD * func0(_QWORD *a1, __int64 *a2)
{
_QWORD *result; // rax

*a1 = 1LL;
a1[1] = 0LL;
a1[2] = 0LL;
a1[3] = -a2[3] / *a2;
a1[4] = 1LL;
a1[5] = 0LL;
a1[6] = -a2[6] / *a2;
a1[7] = 0LL;
result = a1 + 6;
a1[8] = 1LL;
return result;
}