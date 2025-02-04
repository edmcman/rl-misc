#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
__int64 result; // rax
char v2; // [rsp+Fh] [rbp-9h]
int v3; // [rsp+10h] [rbp-8h]
int v4; // [rsp+10h] [rbp-8h]
unsigned int v5; // [rsp+14h] [rbp-4h]

v3 = 0;
v5 = 0;
while ( *(_BYTE *)(v3 + a1) )
++v3;
v4 = v3 - 1;
if ( *(_BYTE *)(v4 + a1) == 10 )
--v4;
while ( 1 )
{
result = v5;
if ( (int)v5 >= v4 )
break;
v2 = *(_BYTE *)((int)v5 + a1);
*(_BYTE *)((int)v5 + a1) = *(_BYTE *)(v4 + a1);
*(_BYTE *)(a1 + v4--) = v2;
++v5;
}
return result;
}