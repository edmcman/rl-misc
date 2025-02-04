
# 1 
#include "defs.h"
_BYTE * func0(int a1, _BYTE *a2)
{
int v3; // [rsp+Ch] [rbp-34h]
int v4; // [rsp+1Ch] [rbp-24h]
_BYTE *v5; // [rsp+20h] [rbp-20h]
char v6[19]; // [rsp+2Dh] [rbp-13h] BYREF

v3 = a1;
*(_QWORD *)&v6[11] = __readfsqword(0x28u);
strcpy(v6, "0123456789");
v5 = a2;
if ( a1 < 0 )
{
v5 = a2 + 1;
*a2 = 45;
v3 = -a1;
}
v4 = v3;
do
{
++v5;
v4 /= 10;
}
while ( v4 );
*v5 = 0;
do
{
*--v5 = v6[v3 % 10];
v3 /= 10;
}
while ( v3 );
return a2;
}