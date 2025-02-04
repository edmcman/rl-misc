
# 1 
#include "defs.h"
_DWORD * func0(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
_DWORD *result; // rax
int v5; // [rsp+2Ch] [rbp-4h]
int i; // [rsp+2Ch] [rbp-4h]
int j; // [rsp+2Ch] [rbp-4h]

v5 = 0;
*a2 = 0;
*a3 = 0;
while ( *(_BYTE *)(v5 + a1) == 32 || *(_BYTE *)(v5 + a1) == 9 || *(_BYTE *)(v5 + a1) == 10 )
++v5;
if ( !*(_BYTE *)(v5 + a1) )
*a4 = v5;
*a2 = v5;
for ( i = 0; *(_BYTE *)(i + a1); ++i )
;
for ( j = i - 1; *(_BYTE *)(j + a1) == 32 || *(_BYTE *)(j + a1) == 9 || *(_BYTE *)(j + a1) == 10; --j )
;
result = a3;
*a3 = j;
return result;
}