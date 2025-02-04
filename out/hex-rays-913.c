#include <stdio.h>

#include <math.h>

#include <float.h>

#include <string.h>

#include <stdlib.h>

#include <errno.h>

# 1 
#include "defs.h"
unsigned __int64  func0(_BYTE *a1, int a2)
{
_BYTE *v2; // rax
int v3; // eax
int v4; // eax
_BYTE *v5; // rax
int v7; // [rsp+4h] [rbp-2Ch]
_BYTE *v8; // [rsp+8h] [rbp-28h]
int v9; // [rsp+18h] [rbp-18h]
char v10[9]; // [rsp+1Fh] [rbp-11h]
unsigned __int64 v11; // [rsp+28h] [rbp-8h]

v7 = a2;
v11 = __readfsqword(0x28u);
*a1 = 101;
v2 = a1 + 1;
v8 = a1 + 2;
if ( a2 >= 0 )
{
*v2 = 43;
}
else
{
*v2 = 45;
v7 = -a2;
}
v9 = 0;
while ( v7 )
{
v3 = v9++;
v10[v3] = v7 % 10 + 48;
v7 /= 10;
}
while ( v9 <= 0 )
{
v4 = v9++;
v10[v4] = 48;
}
while ( v9 > 0 )
{
--v9;
v5 = v8++;
*v5 = v10[v9];
}
*v8 = 0;
return __readfsqword(0x28u) ^ v11;
}