
# 1 
#include "defs.h"
unsigned __int64  func0(unsigned __int64 a1, __int64 a2)
{
int v2; // eax
int i; // [rsp+18h] [rbp-58h]
int v6; // [rsp+1Ch] [rbp-54h]
__int64 v7[8]; // [rsp+20h] [rbp-50h]
char v8; // [rsp+60h] [rbp-10h]
unsigned __int64 v9; // [rsp+68h] [rbp-8h]

v9 = __readfsqword(0x28u);
v7[0] = 0LL;
v7[1] = 0LL;
v7[2] = 0LL;
v7[3] = 0LL;
v7[4] = 0LL;
v7[5] = 0LL;
v7[6] = 0LL;
v7[7] = 0LL;
v8 = 0;
v6 = 0;
do
{
v2 = v6++;
*((_BYTE *)v7 + v2) = hex_1917[a1 & 0xF];
a1 >>= 4;
}
while ( a1 && v6 <= 63 );
for ( i = 0; i < v6; ++i )
*(_BYTE *)(i + a2) = *((_BYTE *)v7 + v6 - 1 - i);
*(_BYTE *)(i + a2) = 0;
return __readfsqword(0x28u) ^ v9;
}