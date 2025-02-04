#include <stdio.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
int i; // [rsp+1Ch] [rbp-4h]

for ( i = 0; *(_BYTE *)(i + a2); ++i )
*(_BYTE *)(i + a1) = *(_BYTE *)(i + a2);
*(_BYTE *)(i + a1) = 0;
return a1;
}