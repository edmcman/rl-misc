#include <string.h>

#include <errno.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
__int64 v3; // [rsp+18h] [rbp-8h]

if ( !a1 )
return 0LL;
v3 = 0LL;
if ( a2 )
{
while ( *(_BYTE *)(a2 + v3) )
{
*(_BYTE *)(a1 + v3) = *(_BYTE *)(a2 + v3);
++v3;
}
}
*(_BYTE *)(a1 + v3) = 0;
return a1;
}