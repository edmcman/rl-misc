#include <stdio.h>

# 1 
#include "defs.h"
_BYTE * func0(__int64 a1, int a2)
{
int v2; // eax
_BYTE *result; // rax
int i; // [rsp+14h] [rbp-8h]
int v5; // [rsp+18h] [rbp-4h]

v5 = 0;
for ( i = 0; *(_BYTE *)(i + a1); ++i )
{
if ( a2 != *(char *)(i + a1) )
{
v2 = v5++;
*(_BYTE *)(a1 + v2) = *(_BYTE *)(i + a1);
}
}
result = (_BYTE *)(v5 + a1);
*result = 0;
return result;
}