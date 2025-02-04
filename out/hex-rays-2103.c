#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <stdint.h>

#include <stdbool.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, int a2)
{
char v3; // [rsp+17h] [rbp-15h]
int v4; // [rsp+18h] [rbp-14h]
int v5; // [rsp+1Ch] [rbp-10h]
int v6; // [rsp+20h] [rbp-Ch]
_BYTE *v7; // [rsp+24h] [rbp-8h]
_BYTE *v8; // [rsp+24h] [rbp-8h]

v7 = a1;
v4 = a2;
v5 = 1000000000;
v3 = 0;
if ( a2 < 0 )
{
v4 = -a2;
*a1 = 45;
v7 = a1 + 1;
}
do
{
v6 = v4 / v5;
if ( v4 / v5 || v3 )
{
v3 = 1;
*v7++ = v6 + 48;
v4 -= v5 * v6;
}
v5 /= 10;
}
while ( v5 > 1 );
*v7 = v4 + 48;
v8 = v7 + 1;
*v8 = 0;
return v8;
}