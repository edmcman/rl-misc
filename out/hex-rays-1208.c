
# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, unsigned int a3)
{
__int64 result; // rax
int v4; // [rsp+1Ch] [rbp-8h]
int i; // [rsp+20h] [rbp-4h]

v4 = 0;
result = a3;
for ( i = a3; i <= 1023; ++i )
{
result = *(unsigned __int8 *)(i + a1);
if ( (_BYTE)result == 32 )
break;
result = *(unsigned __int8 *)(i + a1);
if ( (_BYTE)result == 10 )
break;
result = *(unsigned __int8 *)(i + a1);
*(_BYTE *)(v4++ + a2) = result;
}
return result;
}