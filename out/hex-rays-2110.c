#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_BYTE * func0(__int64 a1, int *a2, __int64 a3)
{
_BYTE *result; // rax
int v4; // [rsp+24h] [rbp-4h]

v4 = 0;
while ( *(_BYTE *)(*a2 + a1) != 32 && *(_BYTE *)(*a2 + a1) != 0 )
*(_BYTE *)(v4++ + a3) = *(_BYTE *)((*a2)++ + a1);
result = (_BYTE *)(v4 + a3);
*result = 0;
return result;
}