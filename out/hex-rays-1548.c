#include <stdio.h>

#include <string.h>

#include <errno.h>

# 1 
#include "defs.h"
__int64  func0(_DWORD *a1, __int64 a2, int a3, char a4)
{
int v5; // eax

if ( a3 <= *a1 )
return 0LL;
v5 = (*a1)++;
*(_BYTE *)(a2 + v5) = a4;
return 1LL;
}