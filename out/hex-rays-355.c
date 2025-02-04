
# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
__int64 result; // rax
int i; // [rsp+14h] [rbp-4h]

for ( i = 0; ; ++i )
{
result = *(unsigned __int8 *)(i + a1);
if ( !(_BYTE)result )
break;
*(_BYTE *)(i + a1) &= 0xDFu;
}
return result;
}