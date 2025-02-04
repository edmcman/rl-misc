#include <string.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1)
{
_BYTE *i; // [rsp+10h] [rbp-8h]

if ( a1 )
{
for ( i = a1; *i; ++i )
*i = i[1];
}
return a1;
}