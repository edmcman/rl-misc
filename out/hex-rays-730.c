#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
_BYTE * func0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
_BYTE *result; // rax
int i; // [rsp+2Ch] [rbp-4h]

for ( i = 0; i <= 7; ++i )
{
*(_BYTE *)(i + a1) = 48;
*(_BYTE *)(i + a2) = 48;
*(_BYTE *)(i + a3) = 48;
result = (_BYTE *)(i + a4);
*result = 48;
}
return result;
}