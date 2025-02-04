#include <stdio.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
int j; // [rsp+14h] [rbp-Ch]
int i; // [rsp+18h] [rbp-8h]
int v5; // [rsp+1Ch] [rbp-4h]

for ( i = 0; *(_BYTE *)(i + a1); ++i )
{
v5 = 0;
for ( j = 0; *(_BYTE *)(j + a2); ++j )
{
if ( *(_BYTE *)(i + a1) == *(_BYTE *)(j + a2) )
{
v5 = 1;
*(_BYTE *)(j + a2) = 43;
break;
}
}
if ( !*(_BYTE *)(j + a2) && !v5 )
return 0LL;
}
return 1LL;
}