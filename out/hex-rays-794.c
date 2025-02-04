
# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, int a2)
{
char *v2; // rax
char v4; // [rsp+1Bh] [rbp-11h]
int i; // [rsp+1Ch] [rbp-10h]
int v6; // [rsp+20h] [rbp-Ch]
char *v7; // [rsp+24h] [rbp-8h]

v6 = 0;
*a1 = 48;
v7 = a1 + 2;
a1[1] = 120;
if ( a2 )
{
for ( i = 28; i >= 0; i -= 4 )
{
if ( v6 || ((a2 >> i) & 0xF) != 0 )
{
v6 = 1;
v4 = ((a2 >> i) & 0xF) + 48;
if ( v4 > 57 )
v4 = ((a2 >> i) & 0xF) + 55;
v2 = v7++;
*v2 = v4;
}
}
}
else
{
v7 = a1 + 3;
a1[2] = 48;
}
*v7 = 0;
return a1;
}