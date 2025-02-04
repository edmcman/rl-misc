#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(_DWORD *a1, _BYTE *a2)
{
int v3; // [rsp+14h] [rbp-1Ch] BYREF
__int64 v4[3]; // [rsp+18h] [rbp-18h] BYREF

v4[2] = __readfsqword(0x28u);
v3 = 0;
v4[1] = (__int64)v4;
v4[0] = (__int64)&v3;
v3 = (char)*a2 - 97;
v3 = (v3 + 1) % 26;
*a2 = v3 + 97;
return (unsigned int)++*a1;
}