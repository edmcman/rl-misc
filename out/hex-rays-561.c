#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
int i; // [rsp+20h] [rbp-4h]

for ( i = 0; i <= 1023; ++i )
{
if ( !*(_DWORD *)(4LL * i + a2) )
{
*(_DWORD *)(4LL * i + a2) = 1;
return (unsigned int)i;
}
}
return 0xFFFFFFFFLL;
}