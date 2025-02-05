#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, int a3)
{
__int64 result; // rax
unsigned int i; // [rsp+20h] [rbp-4h]

for ( i = 0; ; ++i )
{
result = i;
if ( (int)i >= a3 )
break;
*(float *)(4LL * (int)i + a2) = *(float *)(4LL * (int)i + a1) + *(float *)(4LL * (int)i + a2);
}
return result;
}