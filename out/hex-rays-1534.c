
# 1 
#include "defs.h"
__int64  func0(int *a1, __int64 a2, unsigned int a3)
{
*a1 = ((unsigned int)*a1 >> 8) ^ *(_DWORD *)(4LL * (unsigned __int8)(*a1 ^ a3) + a2);
a1[1] += (unsigned __int8)*a1;
a1[1] = 134775813 * a1[1] + 1;
a1[2] = ((unsigned int)a1[2] >> 8) ^ *(_DWORD *)(4LL * (HIBYTE(a1[1]) ^ (unsigned __int8)a1[2]) + a2);
return a3;
}