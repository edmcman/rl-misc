#include <stdio.h>

# 1 
#include "defs.h"
_BYTE * func0(__int64 a1, __int64 a2)
{
int v2; // eax
int v3; // eax
int v4; // eax
_BYTE *result; // rax
int v6; // [rsp+14h] [rbp-Ch]
int v7; // [rsp+18h] [rbp-8h]
int v8; // [rsp+1Ch] [rbp-4h]

v6 = 0;
v7 = 0;
while ( 1 )
{
v8 = *(char *)(v6 + a2);
if ( !*(_BYTE *)(v6 + a2) )
break;
if ( v8 == 9 )
{
*(_BYTE *)(v7 + a1) = 92;
v3 = v7 + 1;
v7 += 2;
*(_BYTE *)(v3 + a1) = 116;
}
else if ( v8 == 10 )
{
*(_BYTE *)(v7 + a1) = 92;
v2 = v7 + 1;
v7 += 2;
*(_BYTE *)(v2 + a1) = 110;
}
else
{
v4 = v7++;
*(_BYTE *)(v4 + a1) = v8;
}
++v6;
}
result = (_BYTE *)(v7 + a1);
*result = 0;
return result;
}