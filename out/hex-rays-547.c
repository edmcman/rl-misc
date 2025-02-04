
# 1 
#include "defs.h"
_BYTE * func0(int a1, _BYTE *a2)
{
int v3; // [rsp+Ch] [rbp-14h]
int v4; // [rsp+14h] [rbp-Ch]
int v5; // [rsp+18h] [rbp-8h]
int v6; // [rsp+18h] [rbp-8h]
int v7; // [rsp+1Ch] [rbp-4h]

v3 = a1;
if ( a1 )
{
v7 = 0;
if ( a1 < 0 )
{
v7 = 1;
*a2 = 45;
v3 = -a1;
}
v4 = 1;
v5 = 1;
while ( v3 / v4 > 9 )
{
v4 *= 10;
++v5;
}
v6 = v7;
while ( v4 )
{
a2[v6++] = v3 / v4 % 10 + 48;
v4 /= 10;
}
a2[v6] = 0;
}
else
{
*a2 = 48;
a2[1] = 0;
}
return a2;
}