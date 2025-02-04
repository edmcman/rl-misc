
# 1 
#include "defs.h"
__int64  func0(unsigned int a1, int *a2, _DWORD *a3, _DWORD *a4, int *a5, int a6)
{
int i; // [rsp+30h] [rbp-8h]
int v8; // [rsp+34h] [rbp-4h]

v8 = 0;
*a2 = (unsigned __int8)a1;
*a3 = 0;
*a4 = 0;
*a5 = HIWORD(a1) & 0xFFF;
for ( i = 0; i <= 7; ++i )
v8 += (*a2 >> i) & 1;
if ( v8 != 1 )
return 1LL;
if ( a6 < *a3 )
return 2LL;
if ( a6 < *a4 )
return 3LL;
if ( a4 == a3 )
return 4LL;
if ( *a5 > 1 )
return 0LL;
return 5LL;
}