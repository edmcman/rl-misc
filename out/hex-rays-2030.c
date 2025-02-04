
# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int16 a2, __int16 a3)
{
int v4; // [rsp+20h] [rbp-10h]
int v5; // [rsp+28h] [rbp-8h]

v4 = ((a2 + *(__int16 *)(a1 + 2)) >> 15) + *(__int16 *)(a1 + 2);
v5 = (*(__int16 *)(a1 + 2) * a3) >> 15;
*(_WORD *)(a1 + 2) = 0;
*(_WORD *)(a1 + 4) = 0;
return (unsigned int)(v4 * v4 + v5 * v5);
}