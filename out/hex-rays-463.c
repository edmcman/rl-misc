#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
int v2; // eax
int v3; // eax
__int64 result; // rax
int i; // [rsp+18h] [rbp-8h]
int v6; // [rsp+1Ch] [rbp-4h]

v6 = 0;
for ( i = 0; *(_BYTE *)(i + a2); ++i )
{
if ( *(_BYTE *)(i + a2) == 92 )
{
v2 = *(char *)(++i + a2);
if ( v2 == 116 )
{
*(_BYTE *)(v6 + a1) = 9;
goto LABEL_16;
}
if ( v2 <= 116 )
{
if ( v2 == 110 )
{
*(_BYTE *)(v6 + a1) = 10;
goto LABEL_16;
}
if ( v2 <= 110 )
{
if ( v2 == 34 )
{
*(_BYTE *)(v6 + a1) = 34;
goto LABEL_16;
}
if ( v2 == 92 )
{
*(_BYTE *)(v6 + a1) = 92;
goto LABEL_16;
}
}
}
v3 = v6++;
*(_BYTE *)(v3 + a1) = 92;
*(_BYTE *)(v6 + a1) = *(_BYTE *)(i + a2);
}
else
{
*(_BYTE *)(v6 + a1) = *(_BYTE *)(i + a2);
}
LABEL_16:
++v6;
}
result = *(unsigned __int8 *)(i + a2);
*(_BYTE *)(v6 + a1) = result;
return result;
}