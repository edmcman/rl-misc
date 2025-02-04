
# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
__int64 result; // rax
int v3; // [rsp+18h] [rbp-8h]
int i; // [rsp+1Ch] [rbp-4h]

v3 = 0;
for ( i = 0; ; ++i )
{
while ( *(_BYTE *)(i + a2) == 13 )
++i;
*(_BYTE *)(v3 + a1) = *(_BYTE *)(i + a2);
result = *(unsigned __int8 *)(i + a2);
if ( !(_BYTE)result )
break;
++v3;
}
return result;
}