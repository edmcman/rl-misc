#include <ctype.h>

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2, int a3)
{
_BYTE *v3; // rdx
_BYTE *v4; // rax
int v5; // eax
_BYTE *result; // rax
int v8; // [rsp+0h] [rbp-24h]
int v11; // [rsp+20h] [rbp-4h]
int v12; // [rsp+20h] [rbp-4h]

v8 = a3;
v11 = a3;
while ( 1 )
{
v5 = v11--;
if ( !v5 || !*a2 )
break;
v3 = a2++;
v4 = a1++;
*v4 = *v3;
}
v12 = v8;
do
{
if ( !v12-- )
break;
--a1;
}
while ( *a1 == 32 );
result = a1 + 1;
a1[1] = 0;
return result;
}