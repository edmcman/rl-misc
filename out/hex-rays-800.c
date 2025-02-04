
# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, int a2)
{
int v3; // [rsp+0h] [rbp-1Ch]
unsigned int v4; // [rsp+10h] [rbp-Ch]

v3 = a2;
v4 = 0;
if ( a2 == -1 )
v3 = a1[14] >> 6;
if ( !v3 )
return ((1 << (a1[9] & 0xF))
* (1 << (((2 * a1[5]) & 6 | (a1[4] >> 7)) + 2))
* (((4 * (((a1[8] & 3) << 8) | (unsigned __int8)a1[7])) | (unsigned int)(a1[6] >> 6)) + 1)) >> 9;
if ( v3 == 1 )
v4 = ((((((a1[7] & 0x3F) << 8) | (unsigned __int8)a1[6]) << 8) | (unsigned __int8)a1[5]) + 1) << 10;
return v4;
}