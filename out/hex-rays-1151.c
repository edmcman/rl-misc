
# 1 
#include "defs.h"
__int64  func0(int a1, __int64 a2, signed int a3)
{
int v3; // eax
char buf; // [rsp+1Fh] [rbp-11h] BYREF
unsigned int v7; // [rsp+20h] [rbp-10h]
int v8; // [rsp+24h] [rbp-Ch]
unsigned __int64 v9; // [rsp+28h] [rbp-8h]

v9 = __readfsqword(0x28u);
v7 = 0;
while ( (int)v7 < a3 )
{
v8 = read(a1, &buf, 1uLL);
if ( v8 != 1 )
{
if ( v8 < 0 )
return 0xFFFFFFFFLL;
break;
}
v3 = v7++;
*(_BYTE *)(a2 + v3) = buf;
if ( buf == 10 )
break;
}
*(_BYTE *)((int)v7 + a2) = 0;
return v7;
}