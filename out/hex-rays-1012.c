
# 1 
#include "defs.h"
_BYTE * func0(__int64 a1, __int64 a2)
{
int v2; // eax
_BYTE *result; // rax
int i; // [rsp+10h] [rbp-10h]
int j; // [rsp+14h] [rbp-Ch]
int v6; // [rsp+18h] [rbp-8h]
int v7; // [rsp+1Ch] [rbp-4h]

v6 = 0;
for ( i = 0; *(_BYTE *)(i + a1); ++i )
{
v7 = 0;
for ( j = 0; *(_BYTE *)(j + a2); ++j )
{
if ( *(_BYTE *)(i + a1) == *(_BYTE *)(j + a2) )
{
v7 = 1;
break;
}
}
if ( !v7 )
{
v2 = v6++;
*(_BYTE *)(a1 + v2) = *(_BYTE *)(i + a1);
}
}
result = (_BYTE *)(v6 + a1);
*result = 0;
return result;
}