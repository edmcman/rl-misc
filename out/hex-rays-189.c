
# 1 
#include "defs.h"
__int64  func0(_DWORD *a1, _DWORD *a2, float a3)
{
float v4; // [rsp+24h] [rbp-4h]

v4 = 4.0 * (float)(a3 + 8192.0);
*a1 = (__int64)(unsigned int)(int)v4 >> 8;
*a2 = (unsigned __int8)(int)v4;
return 2LL;
}