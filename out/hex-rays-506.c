#include <math.h>

#include <float.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2, __int64 a3, float a4)
{
__int64 result; // rax
unsigned int i; // [rsp+24h] [rbp-4h]

for ( i = 0; ; ++i )
{
result = i;
if ( (int)i > a2 )
break;
if ( a4 > 1.0 )
*(float *)(4LL * (int)i + a3) = (float)((float)(*(float *)(4LL * (int)i + a1) - *(float *)(4LL * (int)i + a3)) / a4)
+ *(float *)(4LL * (int)i + a3);
else
*(_DWORD *)(4LL * (int)i + a3) = *(_DWORD *)(a1 + 4LL * (int)i);
}
return result;
}