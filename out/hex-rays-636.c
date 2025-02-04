
# 1 
#include "defs.h"
_QWORD * func0(_QWORD *a1, __int64 a2, int a3, int a4)
{
_QWORD *result; // rax

*a1 = *(_QWORD *)(8LL * a3 + a2);
a1[1] = *(_QWORD *)(a2 + 8LL * (a4 + a3));
a1[2] = *(_QWORD *)(a2 + 8LL * (2 * a4 + a3));
a1[3] = *(_QWORD *)(a2 + 8LL * (3 * a4 + a3));
a1[4] = *(_QWORD *)(a2 + 8LL * (4 * a4 + a3));
a1[5] = *(_QWORD *)(a2 + 8LL * (5 * a4 + a3));
a1[6] = *(_QWORD *)(a2 + 8LL * (6 * a4 + a3));
result = a1 + 7;
a1[7] = *(_QWORD *)(a2 + 8LL * (7 * a4 + a3));
return result;
}