
# 1 
#include "defs.h"
__int64  func0(int a1, int *a2)
{
int v3; // [rsp+1Ch] [rbp-4h]

v3 = a1 / 0x10000;
if ( a1 < 0 && (_WORD)a1 )
--v3;
*a2 = v3;
return (unsigned int)(a1 % 0x10000);
}