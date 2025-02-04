
# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, _DWORD *a2)
{
_DWORD *result; // rax
int v3; // [rsp+1Ch] [rbp-4h]
int v4; // [rsp+1Ch] [rbp-4h]
int v5; // [rsp+1Ch] [rbp-4h]

v3 = a2[1];
a1[1] = a2[3];
a1[3] = v3;
v4 = a2[2];
a1[2] = a2[6];
a1[6] = v4;
v5 = a2[7];
a1[7] = a2[5];
a1[5] = v5;
result = a1;
if ( a1 != a2 )
{
*a1 = *a2;
a1[4] = a2[4];
result = a1 + 6;
a1[8] = a2[8];
}
return result;
}