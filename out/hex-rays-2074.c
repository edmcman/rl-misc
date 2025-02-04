#include <stdio.h>

# 1 
#include "defs.h"
_BYTE * func0(int a1, _BYTE *a2)
{
_BYTE *result; // rax
char v3; // [rsp+17h] [rbp-19h]
int v4; // [rsp+18h] [rbp-18h]
_BYTE *v5; // [rsp+20h] [rbp-10h]
_BYTE *v6; // [rsp+28h] [rbp-8h]

v5 = a2;
if ( a1 >= 0 )
{
v4 = a1;
}
else
{
v4 = -a1;
*a2 = 45;
v5 = a2 + 1;
}
v6 = v5;
do
{
*v6 = v4 % 10 + 48;
v4 /= 10;
++v6;
}
while ( v4 );
*v6 = 0;
while ( 1 )
{
result = --v6;
if ( v6 <= v5 )
break;
v3 = *v5;
*v5 = *v6;
*v6 = v3;
++v5;
}
return result;
}