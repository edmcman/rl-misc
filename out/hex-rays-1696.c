#include <sys/cdefs.h>

# 1 
#include "defs.h"
_BOOL8  func0(__int16 *a1)
{
unsigned int v1; // eax

if ( *a1 != 63 && *a1 != 33 && *a1 != 58 && *a1 != 61 && *a1 != 41 && *a1 != 93 && *a1 != 47 && *a1 != 44 )
return *a1 > 96 && *a1 <= 122 || *a1 == 27 || *a1 == 42;
v1 = *a1 - 33;
if ( v1 <= 0x3C )
__asm { jmp rax }
*a1 = 42;
return 1LL;
}