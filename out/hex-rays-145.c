
# 1 
#include "defs.h"
__int64  func0(int a1, _WORD *a2)
{
__int64 result; // rax

if ( a1 < 0 )
return 0LL;
if ( a1 > 0xFFFF )
{
if ( a1 > 1114111 )
{
result = 0LL;
}
else
{
*a2 = ((a1 - 0x10000) >> 10) - 10240;
a2[1] = (a1 & 0x3FF) - 9216;
result = 2LL;
}
}
else
{
*a2 = a1;
result = 1LL;
}
return result;
}