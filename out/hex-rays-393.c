#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
__int64 result; // rax
int i; // [rsp+Ch] [rbp-Ch]
unsigned int j; // [rsp+Ch] [rbp-Ch]
int v4; // [rsp+10h] [rbp-8h]
char v5; // [rsp+14h] [rbp-4h]

for ( i = 0; *(_BYTE *)(i + a1); ++i )
;
if ( *(_BYTE *)(i - 1LL + a1) == 10 )
v4 = i - 2;
else
v4 = i - 1;
for ( j = 0; ; ++j )
{
result = j;
if ( (int)j >= v4 )
break;
v5 = *(_BYTE *)((int)j + a1);
*(_BYTE *)((int)j + a1) = *(_BYTE *)(v4 + a1);
*(_BYTE *)(v4-- + a1) = v5;
}
return result;
}