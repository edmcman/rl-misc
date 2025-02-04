
# 1 
#include "defs.h"
unsigned __int64  func0(int a1, int a2, int a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
unsigned __int64 result; // rax

while ( a1 < 0 )
a1 += 3600;
while ( a1 > 3599 )
a1 -= 3600;
if ( a2 )
{
result = (unsigned int)(a1 / 600);
if ( (unsigned int)result <= 5 )
__asm { jmp rax }
}
else
{
*a4 = a3;
*a5 = *a4;
result = (unsigned __int64)a6;
*a6 = *a4;
}
return result;
}