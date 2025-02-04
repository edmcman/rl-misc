
# 1 
#include "defs.h"
_DWORD * func0(int a1, int *a2, int *a3, _DWORD *a4)
{
int v4; // ecx
_DWORD *result; // rax

*a2 = a1 / 3600;
v4 = a1 - 3600 * *a2;
*a3 = v4 / 60;
result = a4;
*a4 = v4 - 60 * *a3;
return result;
}