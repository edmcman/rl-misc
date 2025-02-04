
# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, __int64 a2, char *a3)
{
_BYTE *v3; // rax
int i; // [rsp+1Ch] [rbp-Ch]
int j; // [rsp+1Ch] [rbp-Ch]
_BYTE *v7; // [rsp+20h] [rbp-8h]

v7 = a1;
for ( i = 0; i <= 7 && *(char *)(i + a2) > 32; ++i )
*v7++ = *(_BYTE *)(i + a2);
if ( *a3 > 32 )
{
v3 = v7++;
*v3 = 46;
for ( j = 0; j <= 2 && a3[j] > 32; ++j )
*v7++ = a3[j];
}
*v7 = 0;
return a1;
}