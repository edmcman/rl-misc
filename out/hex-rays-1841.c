#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
int i; // [rsp+Ch] [rbp-Ch]
__int64 v3; // [rsp+10h] [rbp-8h]

for ( i = 0; *(_BYTE *)(i + a1) && *(_BYTE *)(i + a1) != 10 && (*(_BYTE *)(i + a1) == 9 || *(_BYTE *)(i + a1) == 32); ++i )
;
v3 = i + a1;
while ( *(_BYTE *)(i + a1) && *(_BYTE *)(i + a1) != 9 && *(_BYTE *)(i + a1) != 32 && *(_BYTE *)(i + a1) != 10 )
++i;
*(_BYTE *)(i + a1) = 10;
*(_BYTE *)(i + 1LL + a1) = 0;
return v3;
}