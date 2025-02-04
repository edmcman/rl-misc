#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <unistd.h>

#include <fcntl.h>

# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, unsigned int a2, unsigned int *a3)
{
_BYTE *v4; // rax
_BYTE *v5; // [rsp+10h] [rbp-18h]
unsigned int i; // [rsp+24h] [rbp-4h]

v5 = a1;
if ( !a1 )
return 1LL;
for ( i = 0; ; ++i )
{
if ( i >= a2 )
return 1LL;
v4 = v5++;
if ( !*v4 )
break;
}
if ( a3 )
*a3 = i;
return 0LL;
}