#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
char v2; // [rsp+Fh] [rbp-9h]
unsigned int i; // [rsp+10h] [rbp-8h]
unsigned int j; // [rsp+10h] [rbp-8h]
unsigned int v5; // [rsp+14h] [rbp-4h]

for ( i = 0; *(_BYTE *)(i + a1); ++i )
;
v5 = i;
for ( j = 0; j < v5 >> 1; ++j )
{
v2 = *(_BYTE *)(j + a1);
*(_BYTE *)(j + a1) = *(_BYTE *)(v5 - j - 1 + a1);
*(_BYTE *)(a1 + v5 - j - 1) = v2;
}
return a1;
}