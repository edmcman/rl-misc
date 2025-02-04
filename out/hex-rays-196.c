

# 1 
#include "defs.h"
_BYTE * func0(unsigned __int8 *a1, _DWORD *a2)
{
_BYTE *result; // rax
_BYTE v3[5]; // [rsp+1Fh] [rbp-11h]
int v4; // [rsp+24h] [rbp-Ch]
_BYTE *v5; // [rsp+28h] [rbp-8h]

v3[4] = 0;
v4 = 0;
v5 = a1;
*(_DWORD *)v3 = *a1;
if ( v3[0] )
{
do
{
if ( (v3[0] & 0xC0) == 128 )
{
*(_DWORD *)&v3[1] = (*(_DWORD *)&v3[1] << 6) | v3[0] & 0x7F;
}
else
{
v4 = 0;
while ( v3[0] < 0 )
{
++v4;
v3[0] *= 2;
}
*(_DWORD *)&v3[1] = v3[0] >> v4;
}
v3[0] = *++v5;
if ( !*v5 )
break;
--v4;
}
while ( v4 > 0 );
*a2 = *(_DWORD *)&v3[1];
result = v5;
}
else
{
*a2 = 0;
result = a1;
}
return result;
}