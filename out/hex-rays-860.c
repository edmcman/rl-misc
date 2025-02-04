
# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
int i; // [rsp+1Ch] [rbp-4h]

for ( i = 0; ; ++i )
{
*(_BYTE *)(a1 + i) = *(_BYTE *)(i + a2);
if ( !*(_BYTE *)(i + a2) )
break;
}
return a1;
}