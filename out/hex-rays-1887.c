#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2)
{
int v2; // kr00_4
int v3; // eax
char v6; // [rsp+17h] [rbp-5h]
unsigned int v7; // [rsp+18h] [rbp-4h]

v7 = 0;
do
{
v6 = a2 % 128;
v2 = a2;
a2 /= 128;
if ( v2 / 128 > 0 )
v6 |= 0x80u;
v3 = v7++;
*(_BYTE *)(a1 + v3) = v6;
}
while ( a2 > 0 );
return v7;
}