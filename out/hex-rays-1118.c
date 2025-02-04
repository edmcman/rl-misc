
# 1 
#include "defs.h"
_DWORD * func0(__int64 a1, int *a2, _DWORD *a3)
{
_DWORD *result; // rax
char v4; // [rsp+1Ah] [rbp-Eh]
char v5; // [rsp+1Bh] [rbp-Dh]
int i; // [rsp+1Ch] [rbp-Ch]
int j; // [rsp+1Ch] [rbp-Ch]
int v8; // [rsp+20h] [rbp-8h]
int v9; // [rsp+24h] [rbp-4h]

v8 = *a2;
v9 = *a3;
for ( i = *a2; i < v9; ++i )
{
v4 = *(_BYTE *)(i + a1);
if ( v4 != 32 && v4 != 9 && v4 != 10 && v4 != 13 )
break;
}
*a2 = i;
for ( j = v9 - 1; j >= v8; --j )
{
v5 = *(_BYTE *)(j + a1);
if ( v5 != 32 && v5 != 9 && v5 != 10 && v5 != 13 )
break;
}
result = a3;
*a3 = j;
return result;
}