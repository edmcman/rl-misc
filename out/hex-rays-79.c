#include <stdio.h> // sprintf

#include <assert.h> // assert

# 1 
#include "defs.h"
__int64  func0(int a1, _BYTE *a2)
{
_BYTE *v2; // rax
_BYTE *v4; // [rsp+0h] [rbp-40h]
int v5; // [rsp+Ch] [rbp-34h]
char v6; // [rsp+1Fh] [rbp-21h]
int i; // [rsp+20h] [rbp-20h]
int v8; // [rsp+2Ch] [rbp-14h]
_BYTE *v9; // [rsp+30h] [rbp-10h]

v5 = a1;
v4 = a2;
if ( a1 < 0 )
{
v4 = a2 + 1;
*a2 = 45;
v5 = -a1;
}
v9 = v4;
while ( 1 )
{
v2 = v9++;
*v2 = v5 % 10 + 48;
if ( !(v5 / 10) )
break;
v5 /= 10;
}
*v9 = 0;
v8 = (_DWORD)v9 - (_DWORD)v4;
for ( i = 0; i < v8 / 2; ++i )
{
v6 = v4[i];
v4[i] = v4[v8 - 1 - i];
v4[v8 - 1 - i] = v6;
}
return v9 - a2;
}