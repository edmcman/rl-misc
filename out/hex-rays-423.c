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
int i; // [rsp+18h] [rbp-8h]
int v8; // [rsp+1Ch] [rbp-4h]

v8 = 0;
for ( i = 0; *(_BYTE *)(i + a2) && v8 <= 97; ++i )
{
v2 = *(char *)(i + a2);
if ( v2 == 9 )
{
*(_BYTE *)(v8 + a1) = 92;
v4 = v8 + 1;
v8 += 2;
*(_BYTE *)(v4 + a1) = 116;
}
else if ( v2 == 10 )
{
*(_BYTE *)(v8 + a1) = 92;
v3 = v8 + 1;
v8 += 2;
*(_BYTE *)(v3 + a1) = 110;
}
else
{
v5 = v8++;
*(_BYTE *)(a1 + v5) = *(_BYTE *)(i + a2);
}
}
result = (_BYTE *)(v8 + a1);
*result = 0;
return result;
}