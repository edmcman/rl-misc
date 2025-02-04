
# 1 
#include "defs.h"
__int64  func0(_QWORD *a1, __int64 a2, unsigned int a3)
{
*a1 = (*a1 >> 8) ^ *(_QWORD *)(8LL * (unsigned __int8)(a3 ^ *a1) + a2);
a1[1] += (unsigned __int8)*a1;
a1[1] = 134775813LL * a1[1] + 1;
a1[2] = (a1[2] >> 8) ^ *(_QWORD *)(8LL * (BYTE3(a1[1]) ^ (unsigned __int8)a1[2]) + a2);
return a3;
}