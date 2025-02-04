#include <stdio.h>

#include <stdlib.h>

#include <limits.h>

#include <math.h>

# 1 
#include "defs.h"
_BYTE * func0(int *a1, _BYTE *a2)
{
_BYTE *v2; // rax
_BYTE *result; // rax
char v4; // [rsp+1Fh] [rbp-11h]
int v5; // [rsp+20h] [rbp-10h]
int v6; // [rsp+24h] [rbp-Ch]
_BYTE *v7; // [rsp+28h] [rbp-8h]

if ( !*a1 )
{
*a2 = 48;
a2[1] = 0;
}
v5 = *a1;
v7 = a2;
while ( v5 > 0 )
{
v6 = v5 % 36;
if ( v5 % 36 > 9 )
v4 = v6 + 55;
else
v4 = v6 + 48;
*v7 = v4;
v5 /= 36;
++v7;
}
if ( v7 == a2 )
{
v2 = v7++;
*v2 = 48;
}
result = v7;
*v7 = 0;
return result;
}