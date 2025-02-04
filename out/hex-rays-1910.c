





# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
_DWORD *v5; // rdx

v5 = a3 + 2;
*v5 = 1;
a3[1] = *v5;
*a3 = a3[1];
a4[2] = 1;
a4[1] = a4[2];
*a4 = a4[1];
a5[2] = 0;
a5[1] = a5[2];
*a5 = a5[1];
return 0LL;
}