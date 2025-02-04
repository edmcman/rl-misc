
# 1 
#include "defs.h"
unsigned __int64  func0(_DWORD *a1)
{
unsigned __int64 v2; // [rsp+28h] [rbp-8h]

v2 = __readfsqword(0x28u);
*a1 = 1;
return __readfsqword(0x28u) ^ v2;
}