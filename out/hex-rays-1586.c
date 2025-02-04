#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
_BYTE * func0(__int64 a1, int *a2, __int64 a3, char a4)
{
int v4; // eax
_BYTE *result; // rax
_BYTE v6[5]; // [rsp+27h] [rbp-5h]

v6[4] = 0;
*(_DWORD *)v6 = *(unsigned __int8 *)(*a2 + a1);
if ( v6[0] )
{
while ( v6[0] != a4 && v6[0] )
{
v4 = (*(_DWORD *)&v6[1])++;
*(_BYTE *)(a3 + v4) = v6[0];
v6[0] = *(_BYTE *)(++*a2 + a1);
}
if ( v6[0] == a4 )
++*a2;
}
result = (_BYTE *)(*(int *)&v6[1] + a3);
*result = 0;
return result;
}