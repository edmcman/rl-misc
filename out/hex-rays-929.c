#include <stdio.h>

# 1 
#include "defs.h"
_BYTE * func0(__int64 a1, __int64 a2)
{
_BYTE *result; // rax
int i; // [rsp+1Ch] [rbp-4h]

for ( i = 0; *(_BYTE *)(i + a2); ++i )
*(_BYTE *)(i + a1) = *(_BYTE *)(i + a2);
result = (_BYTE *)(i + a1);
*result = 0;
return result;
}