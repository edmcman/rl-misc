
# 1 
#include "defs.h"
_BYTE * func0(int a1, _BYTE *a2)
{
_BYTE *result; // rax

*a2 = (char)(a1 / 60) / 10 + 48;
a2[1] = (char)(a1 / 60) % 10 + 48;
a2[2] = 58;
a2[3] = a1 % 60 / 10 + 48;
a2[4] = a1 % 60 % 10 + 48;
result = a2 + 5;
a2[5] = 0;
return result;
}