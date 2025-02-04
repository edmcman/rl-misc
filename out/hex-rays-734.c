
# 1 
#include "defs.h"
_BYTE * func0(__int64 a1, __int64 a2)
{
_BYTE *result; // rax
int i; // [rsp+1Ch] [rbp-4h]

for ( i = 0; i <= 15; ++i )
{
result = (_BYTE *)(2 * i + a2);
*result = *(_BYTE *)(i + a1) + 122;
}
return result;
}