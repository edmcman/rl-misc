
# 1 
#include "defs.h"
_BOOL8  func0(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
int v5; // [rsp+28h] [rbp-8h]
int v6; // [rsp+2Ch] [rbp-4h]

v5 = a2;
v6 = 0;
*a3 = 0;
while ( !v6 )
{
if ( *(char *)(v5 + a1) <= 47 || *(char *)(v5 + a1) > 57 )
{
if ( *(char *)(v5 + a1) <= 64 || *(char *)(v5 + a1) > 70 )
{
if ( *(char *)(v5 + a1) <= 96 || *(char *)(v5 + a1) > 102 )
{
v6 = 1;
*a4 = v5 - a2;
}
else
{
*a3 *= 16;
*a3 = *a3 + *(char *)(v5 + a1) - 87;
}
}
else
{
*a3 *= 16;
*a3 = *a3 + *(char *)(v5 + a1) - 55;
}
}
else
{
*a3 *= 16;
*a3 = *a3 + *(char *)(v5 + a1) - 48;
}
if ( v5 > a2 + 7 )
{
v6 = 1;
*a4 = 8;
}
++v5;
}
return v5 > a2 + 1;
}