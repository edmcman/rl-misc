











# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, _BYTE *a2)
{
__int64 result; // rax

if ( *a2 && a2[1] )
{
*a1 = a2[1];
if ( a2[2] == 124 && a2[3] )
{
a1[1] = a2[3];
result = 1LL;
}
else
{
result = 0LL;
}
}
else
{
*a1 = 0;
result = 0LL;
}
return result;
}