
# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, int a2)
{
int v2; // eax
_BYTE *v3; // rax
int v6; // [rsp+14h] [rbp-3Ch]
_BYTE *v7; // [rsp+18h] [rbp-38h]
char v8[40]; // [rsp+20h] [rbp-30h]
unsigned __int64 v9; // [rsp+48h] [rbp-8h]

v9 = __readfsqword(0x28u);
v7 = a1;
v6 = 0;
while ( a2 )
{
v2 = v6++;
v8[v2] = a2 % 10 + 48;
a2 /= 10;
}
if ( !v6 )
{
v6 = 1;
v8[0] = 48;
}
while ( v6 > 0 )
{
--v6;
v3 = v7++;
*v3 = v8[v6];
}
*v7 = 0;
return a1;
}