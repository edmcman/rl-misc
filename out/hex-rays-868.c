#include <stdio.h>

#include <string.h>

#include <stdbool.h>

#include <unistd.h>

# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, int a2)
{
__int64 result; // rax
int v3; // [rsp+10h] [rbp-Ch]
int i; // [rsp+14h] [rbp-8h]
int j; // [rsp+18h] [rbp-4h]

if ( a2 )
{
v3 = 5;
for ( i = 4; i >= 0 && !(a2 >> (7 * i)); --i )
--v3;
for ( j = v3 - 1; j >= 0; --j )
{
if ( j )
a1[v3 - (__int64)j - 1] = ((a2 >> (7 * j)) & 0x7F) + 0x80;
else
a1[v3 - 1] = a2 & 0x7F;
}
result = (unsigned int)v3;
}
else
{
*a1 = 0;
result = 1LL;
}
return result;
}