#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <stdbool.h>

#include <string.h>

#include <time.h>

# 1 
#include "defs.h"
_BOOL8  func0(char a1, __int64 a2, __int64 a3, int a4)
{
int i; // [rsp+20h] [rbp-8h]
int v6; // [rsp+24h] [rbp-4h]

v6 = 0;
for ( i = 0; i < a4; ++i )
{
if ( a1 == *(_BYTE *)(i + a2) )
{
*(_BYTE *)(a3 + i) = a1;
++v6;
}
}
return v6 != 0;
}