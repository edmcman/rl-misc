
# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, int a3)
{
__int64 result; // rax

result = (unsigned int)(a3 % 8);
if ( (unsigned int)result <= 7 )
__asm { jmp rax }
return result;
}