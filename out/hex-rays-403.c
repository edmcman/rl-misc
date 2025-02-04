#include <math.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4, float a5)
{
_DWORD *result; // rax
__int64 v6; // rdx
int i; // [rsp+2Ch] [rbp-4h]

if ( *(float *)a3 < a5 )
{
for ( i = 0; a5 > *(float *)&a3[i] && i < a4 - 1; ++i )
;
if ( a5 <= (float)((float)(*(float *)&a3[i - 1] + *(float *)&a3[i]) / 2.0) )
{
*a2 = i - 1;
v6 = 4LL * i - 4;
}
else
{
*a2 = i;
v6 = 4LL * i;
}
result = a1;
*a1 = *(_DWORD *)((char *)a3 + v6);
}
else
{
*a2 = 0;
result = a1;
*a1 = *a3;
}
return result;
}