
# 1 
#include "defs.h"
__int64  func0(int a1, __int64 a2, int a3)
{
int v4; // eax
unsigned int v5; // [rsp+1Ch] [rbp-4h]

if ( a1 > 0 )
{
if ( a1 == 10 )
{
v5 = pos_1915;
pos_1915 = 0;
return v5;
}
if ( a1 != 13 && a3 - 1 > pos_1915 )
{
v4 = pos_1915++;
*(_BYTE *)(v4 + a2) = a1;
*(_BYTE *)(pos_1915 + a2) = 0;
}
}
return 0xFFFFFFFFLL;
}