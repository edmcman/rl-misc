
# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4, float a5)
{
int i; // [rsp+34h] [rbp-4h]

for ( i = 0; a2 > i; ++i )
{
if ( *(float *)(4LL * i + a1) == a5 )
*(_DWORD *)(4LL * i + a3) = -1;
}
return *a4;
}