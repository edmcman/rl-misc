
# 1 
#include "defs.h"
__int64  func0(unsigned int *a1)
{
__int64 result; // rax
unsigned int v2; // [rsp+10h] [rbp-8h]

v2 = *a1;
*a1 = a1 != 0LL;
if ( a1 )
result = v2;
else
result = 0LL;
return result;
}