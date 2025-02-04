#include <string.h>

#include <stdio.h>

#include <stdlib.h>

#include <assert.h>

#include <math.h>

# 1 
#include "defs.h"
_BYTE * func0(__int64 a1, __int64 a2, __int64 a3)
{
__int64 v3; // rax
_BYTE *result; // rax
int i; // [rsp+20h] [rbp-8h]
int j; // [rsp+24h] [rbp-4h]

for ( i = 0; *(_BYTE *)(i + a2) && *(_BYTE *)(i + a2) != 124; ++i )
*(_BYTE *)(i + a1) = *(_BYTE *)(i + a2);
for ( j = 0; i <= 255 && *(_BYTE *)(j + a3); ++j )
*(_BYTE *)(i++ + a1) = *(_BYTE *)(j + a3);
if ( i > 254 )
v3 = 255LL;
else
v3 = i;
result = (_BYTE *)(a1 + v3);
*result = 0;
return result;
}