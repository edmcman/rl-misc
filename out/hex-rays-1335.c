




















# 1 
#include "defs.h"
__int64  func0(__int64 a1, unsigned __int8 a2)
{
char v2; // cl
char v4; // [rsp+17h] [rbp-5h]
int v5; // [rsp+18h] [rbp-4h]

v4 = 1;
v5 = 8;
*(_BYTE *)(a1 + 8) = 0;
do
{
if ( ((unsigned __int8)v4 & a2) != 0 )
v2 = 49;
else
v2 = 48;
*(_BYTE *)(--v5 + a1) = v2;
v4 *= 2;
}
while ( v4 );
return a1;
}