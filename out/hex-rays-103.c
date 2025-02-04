
# 1 
#include "defs.h"
_BYTE * func0(int a1, _BYTE *a2, int a3)
{
_BYTE *v3; // rax
_BYTE *result; // rax
char v6; // [rsp+1Fh] [rbp-21h]
int v7; // [rsp+20h] [rbp-20h]
int v8; // [rsp+24h] [rbp-1Ch]
_BYTE *v9; // [rsp+28h] [rbp-18h]
_BYTE *v10; // [rsp+30h] [rbp-10h]
_BYTE *i; // [rsp+38h] [rbp-8h]

v9 = a2;
v7 = 10;
if ( a3 == 120 )
v7 = 16;
do
{
v8 = a1 % v7;
v3 = v9++;
if ( a1 % v7 > 9 )
*v3 = v8 + 87;
else
*v3 = v8 + 48;
a1 /= v7;
}
while ( a1 );
*v9 = 0;
v10 = a2;
for ( i = v9 - 1; ; --i )
{
result = v10;
if ( v10 >= i )
break;
v6 = *v10;
*v10 = *i;
*i = v6;
++v10;
}
return result;
}