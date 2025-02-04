
# 1 
#include "defs.h"
__int64  func0(char a1, char a2, int *a3)
{
int v3; // edx
int v6; // [rsp+14h] [rbp-Ch]
int v7; // [rsp+1Ch] [rbp-4h]

v7 = a2 - 48;
v6 = v7 ^ (a1 - 48);
if ( *a3 == 1 )
{
v6 ^= *a3;
v3 = v6 & *a3;
}
else
{
v3 = v7 & (a1 - 48);
}
*a3 = v3;
return (unsigned int)(v6 + 48);
}