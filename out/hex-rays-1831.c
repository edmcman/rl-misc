
# 1 
#include "defs.h"
__int64  func0(_DWORD *a1)
{
int i; // [rsp+10h] [rbp-8h]
unsigned int v3; // [rsp+14h] [rbp-4h]

v3 = 0;
for ( i = 0; i <= 9; ++i )
v3 += a1[i];
*a1 = 342;
return v3;
}