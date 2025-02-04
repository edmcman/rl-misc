#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
__int64 result; // rax
char v2; // [rsp+Fh] [rbp-9h]
int i; // [rsp+10h] [rbp-8h]
int v4; // [rsp+10h] [rbp-8h]
unsigned int j; // [rsp+14h] [rbp-4h]

for ( i = 0; *(_BYTE *)(i + a1); ++i )
;
v4 = i - 1;
if ( *(_BYTE *)(v4 + a1) == 10 )
--v4;
for ( j = 0; ; ++j )
{
result = j;
if ( (int)j >= v4 )
break;
v2 = *(_BYTE *)((int)j + a1);
*(_BYTE *)((int)j + a1) = *(_BYTE *)(v4 + a1);
*(_BYTE *)(a1 + v4--) = v2;
}
return result;
}