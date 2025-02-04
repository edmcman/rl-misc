#include <ctype.h>

#include <errno.h>

#include <stdbool.h>

#include <stdint.h>

#include <stdlib.h>

#include <stdio.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 *a2)
{
__int64 result; // rax
unsigned __int8 v3; // [rsp+1Fh] [rbp-1h]

result = *a2;
if ( *a2 )
{
v3 = *(_BYTE *)(--*a2 + a1);
*(_BYTE *)(*a2 + a1) = 0;
result = v3;
}
return result;
}