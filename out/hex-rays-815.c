#include <stdio.h>

#include <string.h>

#include <ctype.h>

#include <stdarg.h>

#include <stdlib.h>

#include <time.h>

#include <unistd.h>

#include <malloc.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
int i; // [rsp+14h] [rbp-4h]

if ( !a1 )
return 0LL;
for ( i = 0; *(_BYTE *)(i + a1); ++i )
{
if ( *(char *)(i + a1) > 96 && *(char *)(i + a1) <= 122 )
*(_BYTE *)(i + a1) -= 32;
}
return a1;
}