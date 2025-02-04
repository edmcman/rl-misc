
# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, __int16 a3, __int16 a4, unsigned int *a5)
{
__int64 i; // [rsp+28h] [rbp-8h]

for ( i = 0LL; i < a2; ++i )
{
if ( a3 == *(_WORD *)(2 * i + a1) )
*(_WORD *)(a1 + 2 * i) = a4;
}
return *a5;
}