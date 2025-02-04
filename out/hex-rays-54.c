#include <stdio.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1)
{
int j; // [rsp+18h] [rbp-78h]
int i; // [rsp+1Ch] [rbp-74h]
char v4[104]; // [rsp+20h] [rbp-70h]
unsigned __int64 v5; // [rsp+88h] [rbp-8h]

v5 = __readfsqword(0x28u);
for ( i = 0; *(_BYTE *)(i + a1); ++i )
v4[i] = *(_BYTE *)(i + a1);
for ( j = 0; j < i; ++j )
*(_BYTE *)(a1 + j) = v4[i - (j + 1)];
return __readfsqword(0x28u) ^ v5;
}