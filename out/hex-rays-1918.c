#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2)
{
char v2; // cl
int v3; // eax
__int64 result; // rax
int v5; // [rsp+14h] [rbp-8h]
int i; // [rsp+18h] [rbp-4h]

v5 = 7;
for ( i = 1; i <= 254; i *= 2 )
{
if ( (i & a2) != 0 )
v2 = 49;
else
v2 = 48;
v3 = v5--;
*(_BYTE *)(v3 + a1) = v2;
}
*(_BYTE *)(a1 + 8) = 32;
result = a1 + 9;
*(_BYTE *)(a1 + 9) = 0;
return result;
}