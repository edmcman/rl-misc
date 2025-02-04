#include <math.h>

#include <malloc.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
__int64 result; // rax
int v3; // [rsp+1Ch] [rbp-4h]

v3 = 0;
do
{
if ( *(_BYTE *)(v3 + a2) == 32 )
*(_BYTE *)(v3 + a1) = 95;
else
*(_BYTE *)(v3 + a1) = *(_BYTE *)(v3 + a2);
result = *(unsigned __int8 *)(v3++ + a2);
}
while ( (_BYTE)result );
return result;
}