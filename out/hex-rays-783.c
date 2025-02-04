#include <stddef.h>

# 1 
#include "defs.h"
__int64  func0(unsigned int *a1, _DWORD *a2)
{
__int64 result; // rax
int v4; // [rsp+1Ch] [rbp-14h]
int i; // [rsp+20h] [rbp-10h]
unsigned int v6; // [rsp+24h] [rbp-Ch]
unsigned int v7; // [rsp+28h] [rbp-8h]

v4 = 32;
v6 = *a1;
v7 = a1[1];
for ( i = -957401312; v4--; i += 1640531527 )
{
v7 -= (v6 + i) ^ (16 * v6 + a2[2]) ^ ((v6 >> 5) + a2[3]);
v6 -= (v7 + i) ^ (16 * v7 + *a2) ^ ((v7 >> 5) + a2[1]);
}
*a1 = v6;
result = v7;
a1[1] = v7;
return result;
}