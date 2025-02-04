#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(int a1, _DWORD *a2)
{
int v3; // [rsp+18h] [rbp-8h]

++*a2;
if ( !a1 || a1 == 1 )
return 1LL;
v3 = func0((unsigned int)(a1 - 1), a2);
return v3 + (unsigned int)func0((unsigned int)(a1 / 2), a2);
}