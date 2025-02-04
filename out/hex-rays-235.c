#include <stdio.h>

# 1 
#include "defs.h"
_BYTE * func0(__int64 a1, __int64 a2)
{
_BYTE *result; // rax
int v3; // [rsp+18h] [rbp-8h]
int v4; // [rsp+1Ch] [rbp-4h]

v3 = 0;
v4 = 0;
while ( *(_BYTE *)(v3 + a1) )
{
if ( *(_BYTE *)(v3 + a1) == 97
|| *(_BYTE *)(v3 + a1) == 65
|| *(_BYTE *)(v3 + a1) == 101
|| *(_BYTE *)(v3 + a1) == 69
|| *(_BYTE *)(v3 + a1) == 105
|| *(_BYTE *)(v3 + a1) == 73
|| *(_BYTE *)(v3 + a1) == 111
|| *(_BYTE *)(v3 + a1) == 79
|| *(_BYTE *)(v3 + a1) == 117
|| *(_BYTE *)(v3 + a1) == 85 )
{
*(_BYTE *)(v4++ + a2) = *(_BYTE *)(v3 + a1);
}
++v3;
}
result = (_BYTE *)(v4 + a2);
*result = 0;
return result;
}