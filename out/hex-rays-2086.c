
# 1 
#include "defs.h"
__int64  func0(int a1, __int64 a2, __int64 a3, float a4)
{
__int64 result; // rax
unsigned int i; // [rsp+24h] [rbp-4h]

for ( i = 0; ; ++i )
{
result = i;
if ( (int)i >= a1 )
break;
*(float *)(4LL * (int)i + a3) = *(float *)(4LL * (int)i + a3) - (float)(*(float *)(4LL * (int)i + a2) * a4);
}
return result;
}