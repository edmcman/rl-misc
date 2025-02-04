#include <stdio.h>

#include <stdlib.h>

#include <stdarg.h>

#include <string.h>

#include <sys/mman.h>

#include <sys/param.h>

#include <regex.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
unsigned __int64 i; // [rsp+28h] [rbp-8h]

if ( a1 == a2 )
return 0LL;
if ( !a1 || !a2 )
return 2LL;
for ( i = 0LL; i < a3; ++i )
{
if ( *(_BYTE *)(a1 + i) != *(_BYTE *)(a2 + i) )
{
*a4 = i;
return 1LL;
}
}
return 0LL;
}