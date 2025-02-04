#include <stdint.h>

#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(_DWORD *a1)
{
unsigned int v1; // eax

v1 = *a1 / 100;
if ( v1 <= 9 )
__asm { jmp rax }
*a1 %= 100;
return 7LL;
}