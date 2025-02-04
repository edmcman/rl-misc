#include <stdio.h>

#include <string.h>

# 1 
#include "defs.h"
_DWORD * func0(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
_DWORD *result; // rax
int i; // [rsp+2Ch] [rbp-4h]

while ( *(_BYTE *)(a2 + a1) == 32
|| *(_BYTE *)(a2 + a1) == 9
|| *(_BYTE *)(a2 + a1) == 13
|| *(_BYTE *)(a2 + a1) == 10 )
++a2;
for ( i = a2; *(_BYTE *)(i + a1) != 13 && *(_BYTE *)(i + a1) != 10 && *(_BYTE *)(i + a1); ++i )
;
*a3 = a2;
result = a4;
*a4 = i;
return result;
}