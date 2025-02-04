#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
int v2; // eax
_BYTE *v3; // rdx
_BYTE *v4; // rax
__int64 result; // rax
int v6; // [rsp+1Ch] [rbp-4h]

v6 = 0;
do
{
v2 = v6++;
v3 = (_BYTE *)(a2 + v2);
v4 = (_BYTE *)(v6 + a1);
*v4 = *v3;
result = (unsigned __int8)*v4;
}
while ( (_BYTE)result );
return result;
}