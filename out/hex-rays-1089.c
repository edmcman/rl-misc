
# 1 
#include "defs.h"
unsigned __int64  func0(int a1, _DWORD *a2)
{
int v3; // [rsp+14h] [rbp-Ch] BYREF
unsigned __int64 v4; // [rsp+18h] [rbp-8h]

v4 = __readfsqword(0x28u);
if ( a1 )
{
func0((unsigned int)(a1 - 1), &v3);
*a2 = a1 * v3;
}
else
{
*a2 = 1;
}
return __readfsqword(0x28u) ^ v4;
}