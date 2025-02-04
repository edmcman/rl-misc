
# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, _BYTE *a2)
{
_BYTE *v3; // rax
char *v5; // [rsp+Ch] [rbp-18h]
int i; // [rsp+14h] [rbp-10h]
int v7; // [rsp+18h] [rbp-Ch]
int v8; // [rsp+20h] [rbp-4h]

if ( !*a1 )
return 0LL;
v5 = a1 + 1;
v7 = (char)*a1 - 32;
if ( v7 <= 0 || v7 > 45 )
return 0LL;
for ( i = 0; i < (v7 + 2) / 3; ++i )
{
if ( *v5 <= 31 || *v5 > 96 )
return 0LL;
if ( v5[1] <= 31 || v5[1] > 96 )
return 0LL;
if ( v5[2] <= 31 || v5[2] > 96 )
return 0LL;
if ( v5[3] <= 31 || v5[3] > 96 )
return 0LL;
v8 = ((v5[2] - 32) << 6) & 0xFC0 | ((v5[1] - 32) << 12) & 0x3F000 | ((*v5 - 32) << 18) & 0xFC0000 | (v5[3] - 32) & 0x3F;
*a2 = BYTE2(v8);
a2[1] = BYTE1(v8);
v3 = a2 + 2;
a2 += 3;
*v3 = v8;
v5 += 4;
}
return (unsigned int)v7;
}