
# 1 
#include "defs.h"
_BYTE * func0(__int64 a1, __int64 a2)
{
int v2; // eax
_BYTE *result; // rax
int i; // [rsp+14h] [rbp-Ch]
int j; // [rsp+18h] [rbp-8h]
int v6; // [rsp+1Ch] [rbp-4h]

v6 = 0;
for ( i = 0; *(_BYTE *)(i + a1); ++i )
{
for ( j = 0; *(_BYTE *)(j + a2) && *(_BYTE *)(j + a2) != *(_BYTE *)(i + a1); ++j )
;
if ( !*(_BYTE *)(j + a2) )
{
v2 = v6++;
*(_BYTE *)(a1 + v2) = *(_BYTE *)(i + a1);
}
}
result = (_BYTE *)(v6 + a1);
*result = 0;
return result;
}