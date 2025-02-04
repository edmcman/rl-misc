#include <stdio.h>

# 1 
#include "defs.h"
_BYTE * func0(__int64 a1, __int64 a2)
{
int v2; // eax
int v3; // eax
int v4; // eax
int v5; // eax
_BYTE *result; // rax
int i; // [rsp+14h] [rbp-Ch]
int v8; // [rsp+18h] [rbp-8h]
int v9; // [rsp+1Ch] [rbp-4h]

v8 = 0;
v9 = 0;
for ( i = 0; *(_BYTE *)(i + a2); ++i )
{
v2 = *(char *)(i + a2);
if ( v2 != 116 )
{
if ( v2 > 116 )
goto LABEL_12;
if ( v2 == 92 )
{
v9 = 1;
continue;
}
if ( v2 != 110 )
goto LABEL_12;
if ( v9 == 1 )
{
v3 = v8++;
*(_BYTE *)(v3 + a1) = 10;
v9 = 0;
continue;
}
}
if ( v9 == 1 )
{
v4 = v8++;
*(_BYTE *)(v4 + a1) = 9;
v9 = 0;
continue;
}
LABEL_12:
v5 = v8++;
*(_BYTE *)(a1 + v5) = *(_BYTE *)(i + a2);
if ( v9 == 1 )
v9 = 0;
}
result = (_BYTE *)(v8 + a1);
*result = 0;
return result;
}