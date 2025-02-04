
# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, int a2, __int64 a3)
{
char v3; // al
char v4; // cl
_BYTE *v5; // rax
_BYTE *result; // rax
_BYTE *v7; // [rsp+10h] [rbp-38h]
char v8; // [rsp+1Fh] [rbp-29h]
int v9; // [rsp+20h] [rbp-28h]
int v10; // [rsp+24h] [rbp-24h]
_BYTE *v11; // [rsp+28h] [rbp-20h]
_BYTE *v12; // [rsp+30h] [rbp-18h]
_BYTE *i; // [rsp+38h] [rbp-10h]
unsigned __int64 v14; // [rsp+40h] [rbp-8h]

v7 = a1;
v11 = a1;
v14 = a3;
v9 = 10;
if ( a2 == 100 && a3 < 0 )
{
v11 = a1 + 1;
*a1 = 45;
v7 = a1 + 1;
v14 = -a3;
}
else if ( a2 == 120 )
{
v9 = 16;
}
do
{
v10 = v14 % v9;
if ( v10 > 9 )
v3 = 87;
else
v3 = 48;
v4 = v3 + v10;
v5 = v11++;
*v5 = v4;
v14 /= (unsigned __int64)v9;
}
while ( v14 );
*v11 = 0;
v12 = v7;
for ( i = v11 - 1; ; --i )
{
result = v12;
if ( v12 >= i )
break;
v8 = *v12;
*v12 = *i;
*i = v8;
++v12;
}
return result;
}