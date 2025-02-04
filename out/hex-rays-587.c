
# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
__int64 result; // rax
int i; // [rsp+Ch] [rbp-Ch]
int v3; // [rsp+Ch] [rbp-Ch]
int k; // [rsp+10h] [rbp-8h]
int j; // [rsp+10h] [rbp-8h]
char v6; // [rsp+14h] [rbp-4h]
char v7; // [rsp+14h] [rbp-4h]

for ( i = 0; *(_BYTE *)(i + a1); ++i )
;
v3 = i - 1;
if ( (v3 & 1) != 0 )
{
for ( j = 0; ; ++j )
{
result = (unsigned int)(v3 / 2);
if ( j > (int)result )
break;
v7 = *(_BYTE *)(v3 - (__int64)j + a1);
*(_BYTE *)(v3 - (__int64)j + a1) = *(_BYTE *)(j + a1);
*(_BYTE *)(j + a1) = v7;
}
}
else
{
for ( k = 0; ; ++k )
{
result = (unsigned int)(v3 / 2);
if ( k >= (int)result )
break;
v6 = *(_BYTE *)(v3 - (__int64)k + a1);
*(_BYTE *)(v3 - (__int64)k + a1) = *(_BYTE *)(k + a1);
*(_BYTE *)(k + a1) = v6;
}
}
return result;
}