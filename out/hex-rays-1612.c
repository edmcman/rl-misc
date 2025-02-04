
# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
__int64 result; // rax
int i; // [rsp+Ch] [rbp-Ch]
int v3; // [rsp+Ch] [rbp-Ch]
int j; // [rsp+Ch] [rbp-Ch]
unsigned int v5; // [rsp+10h] [rbp-8h]
char v6; // [rsp+14h] [rbp-4h]

v5 = 0;
for ( i = 0; *(_BYTE *)(i + a1); ++i )
;
v3 = i - 1;
*(_BYTE *)(v3 + a1) = 10;
for ( j = v3 - 1; ; --j )
{
result = v5;
if ( (int)v5 >= j )
break;
v6 = *(_BYTE *)((int)v5 + a1);
*(_BYTE *)((int)v5 + a1) = *(_BYTE *)(j + a1);
*(_BYTE *)(j + a1) = v6;
++v5;
}
return result;
}