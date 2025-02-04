#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <errno.h>

#include <stdarg.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
__int64 i; // [rsp+18h] [rbp-8h]

for ( i = 0LL; *(_BYTE *)(a2 + i); ++i )
*(_BYTE *)(a1 + i) = *(_BYTE *)(a2 + i);
*(_BYTE *)(a1 + i) = 0;
return a1;
}