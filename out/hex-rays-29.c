
# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
int v2; // eax
_BYTE *v3; // rdx
_BYTE *v4; // rax
unsigned int v6; // [rsp+1Ch] [rbp-4h]

v6 = 0;
do
{
v2 = v6++;
v3 = (_BYTE *)(a2 + v2);
v4 = (_BYTE *)((int)v6 + a1);
*v4 = *v3;
}
while ( *v4 );
return v6;
}