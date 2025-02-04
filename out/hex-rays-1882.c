
# 1 
#include "defs.h"
_BYTE * func0(__int64 a1, __int64 a2)
{
int v2; // eax
int v3; // eax
int v4; // eax
int v5; // eax
int v6; // eax
int v7; // eax
_BYTE *result; // rax
int i; // [rsp+18h] [rbp-8h]
int v10; // [rsp+1Ch] [rbp-4h]

v10 = 0;
for ( i = 0; *(_BYTE *)(i + a2); ++i )
{
if ( *(_BYTE *)(i + a2) != 92 )
{
v2 = v10++;
*(_BYTE *)(a1 + v2) = *(_BYTE *)(i + a2);
continue;
}
v3 = *(char *)(++i + a2);
if ( v3 == 116 )
{
v6 = v10++;
*(_BYTE *)(v6 + a1) = 9;
}
else
{
if ( v3 > 116 )
goto LABEL_12;
if ( v3 == 98 )
{
v4 = v10++;
*(_BYTE *)(v4 + a1) = 32;
continue;
}
if ( v3 == 110 )
{
v5 = v10++;
*(_BYTE *)(v5 + a1) = 10;
}
else
{
LABEL_12:
*(_BYTE *)(v10 + a1) = 92;
v7 = v10 + 1;
v10 += 2;
*(_BYTE *)(a1 + v7) = *(_BYTE *)(i + a2);
}
}
}
result = (_BYTE *)(v10 + a1);
*result = 0;
return result;
}