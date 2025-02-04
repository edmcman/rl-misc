#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>

#include <string.h>

#include <ctype.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, __int64 a2, _DWORD *a3, unsigned int *a4, int a5)
{
int v5; // eax
int v6; // eax
unsigned __int64 result; // rax
int v8; // eax
__int64 v9; // rdx
char v11; // [rsp+27h] [rbp-Dh]
int v12; // [rsp+28h] [rbp-Ch]
unsigned int v13; // [rsp+2Ch] [rbp-8h]
int v14; // [rsp+30h] [rbp-4h]

v12 = 0;
v13 = 0;
v14 = 0;
v11 = 0;
while ( *(_BYTE *)((int)v13 + a1) )
{
if ( v11 )
{
if ( v11 == *(_BYTE *)((int)v13 + a1) && *(_BYTE *)((int)v13 - 1LL + a1) != 92 )
v11 = 0;
}
else
{
switch ( *(_BYTE *)((int)v13 + a1) )
{
case '\'':
case '"':
v11 = *(_BYTE *)((int)v13 + a1);
break;
case '(':
if ( ++v12 == 1 && a2 && (a5 < 0 || v14 < a5) )
{
v5 = v14++;
*(_DWORD *)(a2 + 4LL * v5) = v13;
}
break;
case ')':
if ( !--v12 )
goto LABEL_26;
break;
default:
if ( *(_BYTE *)((int)v13 + a1) == 44 && v12 == 1 && a2 && (a5 < 0 || v14 < a5) )
{
v6 = v14++;
*(_DWORD *)(a2 + 4LL * v6) = v13;
}
break;
}
}
++v13;
}
LABEL_26:
result = *(unsigned __int8 *)((int)v13 + a1);
if ( (_BYTE)result )
{
if ( a2 )
{
if ( a5 < 0 || (result = (unsigned int)v14, v14 < a5) )
{
v8 = v14++;
v9 = 4LL * v8;
result = v13;
*(_DWORD *)(a2 + v9) = v13;
}
}
if ( a3 )
{
result = (unsigned __int64)a3;
*a3 = v14 - 1;
}
if ( a4 )
{
result = (unsigned __int64)a4;
*a4 = v13;
}
}
else
{
if ( a3 )
{
result = (unsigned __int64)a3;
*a3 = -1;
}
if ( a4 )
{
result = (unsigned __int64)a4;
*a4 = -1;
}
}
return result;
}