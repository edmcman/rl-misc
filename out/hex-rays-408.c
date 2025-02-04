
# 1 
#include "defs.h"
_DWORD * func0(int *a1, _DWORD *a2, int a3)
{
_DWORD *result; // rax
int v4; // [rsp+1Ch] [rbp-8h]

v4 = *a1;
*a1 = a3 - 1 - *a2;
result = a2;
*a2 = v4;
return result;
}