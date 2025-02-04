
# 1 
#include "defs.h"
_DWORD * func0(__int64 a1, int *a2, _DWORD *a3, _DWORD *a4)
{
_DWORD *result; // rax
__int64 v5; // [rsp+28h] [rbp-8h]

if ( a1 > 2375839 && a1 <= 2380952 )
{
v5 = 4 * (a1 - 2375474) - 1;
*a2 = (4 * ((int)a1 - 2375474) - 1) / 1461;
*a3 = v5 % 1461 / 4 / 30 + 1;
result = a4;
*a4 = v5 % 1461 / 4 % 30 + 1;
}
else
{
*a2 = 0;
*a3 = 0;
result = a4;
*a4 = 0;
}
return result;
}