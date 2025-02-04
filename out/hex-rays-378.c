#include <stdio.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, unsigned int *a2)
{
_DWORD *result; // rax
int v3; // [rsp+1Ch] [rbp-4h]

result = (_DWORD *)*a2;
if ( *a1 > (int)result )
{
v3 = *a2;
*a2 = *a1;
result = a1;
*a1 = v3;
}
return result;
}