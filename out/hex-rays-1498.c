#include <stdio.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1)
{
_DWORD *result; // rax
int i; // [rsp+14h] [rbp-4h]

for ( i = 19; i > 0; --i )
a1[i] = a1[i - 1];
result = a1;
*a1 = 0;
return result;
}