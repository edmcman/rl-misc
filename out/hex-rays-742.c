#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include <assert.h>

#include <ctype.h>

# 1 
#include "defs.h"
__int64  func0(char *a1, __int64 a2)
{
char *v2; // rax
__int64 v4; // [rsp+0h] [rbp-20h]
char *v5; // [rsp+8h] [rbp-18h]
char v6; // [rsp+13h] [rbp-Dh]
int v7; // [rsp+14h] [rbp-Ch]
unsigned int v8; // [rsp+14h] [rbp-Ch]
char *v9; // [rsp+18h] [rbp-8h]

v5 = a1;
v4 = a2;
v7 = 1;
if ( a2 < 0 )
{
v7 = 2;
v5 = a1 + 1;
*a1 = 45;
v4 = -a2;
}
v9 = v5;
while ( v4 > 9 )
{
v2 = v9++;
*v2 = (char)v4 % 10 + 48;
v4 /= 10LL;
}
*v9 = v4 + 48;
v9[1] = 0;
v8 = (_DWORD)v9 - (_DWORD)v5 + v7;
while ( v5 < v9 )
{
v6 = *v9;
*v9 = *v5;
*v5++ = v6;
--v9;
}
return v8;
}