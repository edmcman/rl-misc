
# 1 
#include "defs.h"
_BYTE * func0(__int64 a1, __int64 a2)
{
int v2; // eax
_BYTE *result; // rax
int i; // [rsp+18h] [rbp-8h]
int v5; // [rsp+1Ch] [rbp-4h]

v5 = 0;
for ( i = 0; *(_BYTE *)(i + a2); ++i )
{
v2 = *(char *)(i + a2);
if ( v2 == 9 )
{
*(_BYTE *)(v5++ + a1) = 92;
*(_BYTE *)(v5 + a1) = 116;
}
else if ( v2 == 10 )
{
*(_BYTE *)(v5++ + a1) = 92;
*(_BYTE *)(v5 + a1) = 110;
}
else
{
*(_BYTE *)(v5 + a1) = *(_BYTE *)(i + a2);
}
++v5;
}
result = (_BYTE *)(v5 + a1);
*result = 0;
return result;
}