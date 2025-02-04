#include <stdio.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1)
{
int v2; // [rsp+14h] [rbp-1Ch]
int i; // [rsp+18h] [rbp-18h]
int v4[3]; // [rsp+1Ch] [rbp-14h]
unsigned __int64 v5; // [rsp+28h] [rbp-8h]

v5 = __readfsqword(0x28u);
v2 = 0;
v4[0] = 3;
v4[1] = 1;
v4[2] = 2;
for ( i = 0; *(_BYTE *)(i + a1); ++i )
{
*(_BYTE *)(i + a1) += LOBYTE(v4[v2++]);
if ( v2 == 3 )
v2 = 0;
}
return __readfsqword(0x28u) ^ v5;
}