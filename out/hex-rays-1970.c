
# 1 
#include "defs.h"
__int64  func0(char a1, char a2, _DWORD *a3)
{
char v4; // [rsp+Ch] [rbp-14h]

v4 = (a1 & 0x3F) - 66;
*a3 = __CFADD__(a2 & 3, v4);
return (unsigned __int8)((a2 & 3) + v4);
}