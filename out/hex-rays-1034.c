
# 1 
#include "defs.h"
unsigned __int64  func0(unsigned __int64 *a1, _QWORD *a2)
{
unsigned __int64 result; // rax
unsigned __int64 v3; // [rsp+18h] [rbp-48h]
unsigned __int64 v4; // [rsp+20h] [rbp-40h]
__int64 v5; // [rsp+28h] [rbp-38h]
unsigned __int64 i; // [rsp+30h] [rbp-30h]

v3 = *a1;
v4 = a1[1];
v5 = 0LL;
for ( i = 0LL; i <= 0x1F; ++i )
{
v5 += 2654435769LL;
v3 += (v4 + v5) ^ (16 * v4 + *a2) ^ ((v4 >> 5) + a2[1]);
v4 += (v3 + v5) ^ (16 * v3 + a2[2]) ^ ((v3 >> 5) + a2[3]);
}
*a1 = v3;
result = v4;
a1[1] = v4;
return result;
}