#include <stdio.h>

#include <stdlib.h>

#include <stdbool.h>

#include <string.h>

#include <sys/stat.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, char a2)
{
char v2; // cl
__int64 result; // rax
int v4; // [rsp+14h] [rbp-8h]
int i; // [rsp+18h] [rbp-4h]

v4 = 0;
for ( i = 7; i >= 0; --i )
{
if ( ((a2 >> i) & 1) != 0 )
v2 = 49;
else
v2 = 48;
*(_BYTE *)(v4++ + a1) = v2;
}
result = a1 + 8;
*(_BYTE *)(a1 + 8) = 0;
return result;
}