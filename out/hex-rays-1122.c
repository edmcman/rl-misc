
# 1 
#include "defs.h"
int * func0(_DWORD *a1, _DWORD *a2, int *a3)
{
int *result; // rax

result = a3;
*a3 = *a1 % *a2;
return result;
}