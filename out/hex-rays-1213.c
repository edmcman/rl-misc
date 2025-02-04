#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(int a1, __int64 a2)
{
int v3; // [rsp+1Ch] [rbp-4h]

if ( a1 <= 0 )
return 0LL;
v3 = 1;
if ( a1 > 9 )
v3 = func0((unsigned int)(a1 / 10), a2) + 1;
*(_BYTE *)(v3 - 1LL + a2) = a1 % 10 + 48;
return (unsigned int)v3;
}