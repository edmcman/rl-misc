#include <stdlib.h>

#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, unsigned int a2)
{
unsigned __int64 v3; // [rsp+14h] [rbp-8h]

v3 = 0LL;
do
{
if ( !*(_DWORD *)(4 * v3 + a1) )
{
*(_DWORD *)(4 * v3 + a1) = 1;
return (unsigned int)(v3 + 1);
}
++v3;
}
while ( v3 < a2 );
return 0LL;
}