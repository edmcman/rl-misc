#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#include <stdio.h>

#include <expat.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, int a3)
{
unsigned int i; // [rsp+20h] [rbp-4h]

for ( i = 0; *(_BYTE *)((int)i + a2) && (int)i < a3; ++i )
*(_BYTE *)((int)i + a1) = *(_BYTE *)((int)i + a2);
*(_BYTE *)((int)i + a1) = 0;
return i;
}