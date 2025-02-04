
# 1 
#include "defs.h"
_BYTE * func0(__int64 a1, __int64 a2)
{
int v2; // eax
int v3; // eax
int v4; // eax
int v5; // eax
int v6; // eax
_BYTE *result; // rax
int i; // [rsp+18h] [rbp-8h]
int v9; // [rsp+1Ch] [rbp-4h]

v9 = 0;
for ( i = 0; *(_BYTE *)(i + a2); ++i )
{
if ( *(_BYTE *)(i + a2) == 92 )
{
v2 = *(char *)(++i + a2);
if ( v2 == 110 )
{
v3 = v9++;
*(_BYTE *)(v3 + a1) = 10;
}
else if ( v2 == 116 )
{
v4 = v9++;
*(_BYTE *)(v4 + a1) = 9;
}
else
{
*(_BYTE *)(v9 + a1) = 92;
v5 = v9 + 1;
v9 += 2;
*(_BYTE *)(a1 + v5) = *(_BYTE *)(i + a2);
}
}
else
{
v6 = v9++;
*(_BYTE *)(a1 + v6) = *(_BYTE *)(i + a2);
}
}
result = (_BYTE *)(v9 + a1);
*result = 0;
return result;
}