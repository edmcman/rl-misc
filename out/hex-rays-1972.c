
# 1 
#include "defs.h"
unsigned __int64  func0(_DWORD *a1)
{
int v2; // [rsp+14h] [rbp-Ch]
unsigned __int64 v3; // [rsp+18h] [rbp-8h]

v3 = __readfsqword(0x28u);
LOBYTE(v2) = HIBYTE(*a1);
BYTE1(v2) = BYTE2(*a1);
BYTE2(v2) = BYTE1(*a1);
HIBYTE(v2) = *a1;
*a1 = v2;
return __readfsqword(0x28u) ^ v3;
}