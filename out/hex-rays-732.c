
# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2, int a3)
{
__int64 result; // rax

if ( a2 > 0 && a2 <= 40 && a3 > 0 && a3 <= 20 )
{
result = a2 - 1;
*(_DWORD *)(160LL * (20 - a3) + a1 + 4 * result) = *(_DWORD *)(a1 + 160LL * (20 - a3) + 4 * result) == 0;
}
return result;
}