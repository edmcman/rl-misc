
# 1 
#include "defs.h"
__int64  func0(__int64 a1, int *a2, int a3)
{
unsigned int v4; // [rsp+20h] [rbp-14h]
int v5; // [rsp+24h] [rbp-10h]
int i; // [rsp+28h] [rbp-Ch]
int v7; // [rsp+28h] [rbp-Ch]
int v8; // [rsp+2Ch] [rbp-8h]

v4 = 0;
v8 = *a2;
for ( i = 0; i < a3; ++i )
{
if ( v8 < a2[i] )
v8 = a2[i];
}
v7 = 0;
v5 = 0;
while ( v7 < a3 )
{
if ( v8 == a2[v7] )
{
*(_DWORD *)(a1 + 4LL * v5++) = v7;
++v4;
}
++v7;
}
return v4;
}