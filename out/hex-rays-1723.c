#include <assert.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, __int64 a2, __int64 a3)
{
int i; // [rsp+28h] [rbp-58h]
int k; // [rsp+28h] [rbp-58h]
int j; // [rsp+2Ch] [rbp-54h]
int l; // [rsp+2Ch] [rbp-54h]
__int64 v8[9]; // [rsp+30h] [rbp-50h]
unsigned __int64 v9; // [rsp+78h] [rbp-8h]

v9 = __readfsqword(0x28u);
for ( i = 0; i <= 2; ++i )
{
for ( j = 0; j <= 2; ++j )
v8[3 * i + j] = *(_QWORD *)(a3 + 8LL * j) * *(_QWORD *)(24LL * i + a2)
+ *(_QWORD *)(24LL * i + a2 + 8) * *(_QWORD *)(a3 + 24 + 8LL * j)
+ *(_QWORD *)(24LL * i + a2 + 16) * *(_QWORD *)(a3 + 48 + 8LL * j);
}
for ( k = 0; k <= 2; ++k )
{
for ( l = 0; l <= 2; ++l )
*(_QWORD *)(24LL * k + a1 + 8LL * l) = v8[3 * k + l];
}
return __readfsqword(0x28u) ^ v9;
}