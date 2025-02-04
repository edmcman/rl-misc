#include <stdint.h>

#include <ctype.h>

#include <string.h>

#include <stdbool.h>

# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, unsigned int a2)
{
_BYTE *v2; // rax
_BYTE *v4; // [rsp+4h] [rbp-18h]
unsigned int v5; // [rsp+14h] [rbp-8h]
int v6; // [rsp+18h] [rbp-4h]

v4 = a1;
v5 = a2;
v6 = 0;
if ( a2 > 0x63 )
{
v4 = a1 + 1;
*a1 = a2 / 0x64 + 48;
v5 = a2 % 0x64;
v6 = 1;
}
if ( a2 > 9 )
{
v2 = v4++;
*v2 = v5 / 0xA + 48;
v5 %= 0xAu;
++v6;
}
*v4 = v5 + 48;
return (unsigned int)(v6 + 1);
}