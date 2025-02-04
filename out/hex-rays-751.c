#include <stdio.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
int v1; // eax
_BYTE *v2; // rcx
int v3; // eax
_BYTE *v4; // rax
__int64 result; // rax
int i; // [rsp+8h] [rbp-10h]
int j; // [rsp+Ch] [rbp-Ch]
int v8; // [rsp+10h] [rbp-8h]
int v9; // [rsp+10h] [rbp-8h]
int v10; // [rsp+14h] [rbp-4h]

for ( i = 0; ; ++i )
{
result = *(unsigned __int8 *)(i + a1);
if ( !(_BYTE)result )
break;
for ( j = i + 1; *(_BYTE *)(j + a1); ++j )
{
if ( *(_BYTE *)(i + a1) == *(_BYTE *)(j + a1) )
{
v10 = j;
while ( *(_BYTE *)(i + a1) == *(_BYTE *)(j + 1LL + a1) )
++j;
v8 = j - v10 + 1;
j = v10 - 1;
v9 = v10 + v8;
do
{
v1 = v9++;
v2 = (_BYTE *)(v1 + a1);
v3 = v10++;
v4 = (_BYTE *)(v3 + a1);
*v4 = *v2;
}
while ( *v4 );
}
}
}
return result;
}