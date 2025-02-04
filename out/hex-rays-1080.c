
# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, int a2, unsigned __int8 *a3, int a4)
{
unsigned __int8 *v4; // rax
__int64 result; // rax
_BYTE *v6; // rax
unsigned __int8 v12; // [rsp+1Bh] [rbp-Dh]
unsigned int v13; // [rsp+1Ch] [rbp-Ch]
__int64 v14; // [rsp+20h] [rbp-8h]

v14 = 1LL;
v13 = 0;
while ( a4-- )
{
v4 = a3++;
v12 = hex_1916[*v4];
if ( v12 != 16 )
{
if ( v12 == 17 )
return 0xFFFFFFFFLL;
v14 = (16 * v14) | v12;
if ( (v14 & 0x100) != 0 )
{
if ( a2 )
{
v6 = a1++;
*v6 = v14;
--a2;
}
++v13;
v14 = 1LL;
}
}
}
if ( v14 == 1 )
result = v13;
else
result = 0xFFFFFFFFLL;
return result;
}