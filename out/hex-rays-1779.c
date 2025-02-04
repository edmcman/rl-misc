#include <stdio.h>

#include <stdint.h>

#include <string.h>

#include <stdlib.h>

#include <errno.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
int i; // [rsp+1Ch] [rbp-4h]

for ( i = 0; i <= 7; ++i )
{
if ( *(_BYTE *)(i + a1) > *(_BYTE *)(i + a2) )
return 1LL;
if ( *(_BYTE *)(i + a1) < *(_BYTE *)(i + a2) )
return 0xFFFFFFFFLL;
}
return 0LL;
}