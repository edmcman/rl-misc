#include <assert.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#include <stdio.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, const char *a2, char a3)
{
_BYTE *i; // [rsp+28h] [rbp-8h]

if ( !a1 || !a2 )
return 0LL;
for ( i = a1; *i; ++i )
{
if ( strchr(a2, (char)*i) )
*i = a3;
}
return a1;
}