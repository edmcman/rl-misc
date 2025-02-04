#include <ctype.h>

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, char a2)
{
unsigned __int8 i; // [rsp+1Bh] [rbp-1h]

for ( i = 0; *(_BYTE *)(i + a1); ++i )
*(_BYTE *)(i + a1) = a2;
return a1;
}