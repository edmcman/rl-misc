#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
char v1; // si
_BYTE *v2; // rax
int i; // [rsp+10h] [rbp-8h]
int j; // [rsp+14h] [rbp-4h]

for ( i = 0; i <= 3; ++i )
{
for ( j = i + 1; j <= 3; ++j )
{
v1 = *(_BYTE *)(5 * j + i + a1) ^ *(_BYTE *)(5 * i + j + a1);
v2 = (_BYTE *)(5 * j + i + a1);
*v2 = *(_BYTE *)(5 * i + j + a1);
*(_BYTE *)(5 * i + j + a1) = *v2 ^ v1;
}
}
return a1;
}