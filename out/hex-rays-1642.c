#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
int v2; // eax
__int64 result; // rax
int v4; // [rsp+1Ch] [rbp-4h]

v4 = 0;
do
{
*(_BYTE *)(v4 + a1) = *(_BYTE *)(v4 + a2);
v2 = v4++;
result = *(unsigned __int8 *)(v2 + a2);
}
while ( (_BYTE)result );
return result;
}