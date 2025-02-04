
# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, __int64 a2)
{
int v2; // eax
int v3; // eax
__int64 v5; // [rsp+8h] [rbp-68h]
int i; // [rsp+14h] [rbp-5Ch]
int v7; // [rsp+18h] [rbp-58h]
int v8; // [rsp+1Ch] [rbp-54h]
__int64 v9[8]; // [rsp+20h] [rbp-50h]
char v10; // [rsp+60h] [rbp-10h]
unsigned __int64 v11; // [rsp+68h] [rbp-8h]

v5 = a1;
v11 = __readfsqword(0x28u);
v9[0] = 0LL;
v9[1] = 0LL;
v9[2] = 0LL;
v9[3] = 0LL;
v9[4] = 0LL;
v9[5] = 0LL;
v9[6] = 0LL;
v9[7] = 0LL;
v10 = 0;
v8 = 0;
v7 = 0;
if ( a1 < 0 )
{
v8 = 1;
v5 = -a1;
}
do
{
v2 = v7++;
*((_BYTE *)v9 + v2) = (char)v5 % 10 + 48;
v5 /= 10LL;
}
while ( v5 > 0 && v7 <= 62 );
if ( v8 )
{
v3 = v7++;
*((_BYTE *)v9 + v3) = 45;
}
for ( i = 0; i < v7; ++i )
*(_BYTE *)(i + a2) = *((_BYTE *)v9 + v7 - 1 - i);
*(_BYTE *)(i + a2) = 0;
return __readfsqword(0x28u) ^ v11;
}