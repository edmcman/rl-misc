#include <assert.h>

# 1 
#include "defs.h"
_QWORD * func0(_QWORD *a1, __int64 a2)
{
_QWORD *result; // rax

*a1 = 1LL;
a1[1] = 0LL;
a1[2] = 0LL;
a1[3] = 0LL;
a1[4] = 1LL;
a1[5] = 0LL;
a1[6] = 0LL;
a1[7] = -*(_QWORD *)(a2 + 56) / *(__int64 *)(a2 + 32);
result = a1 + 6;
a1[8] = 1LL;
return result;
}