#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <inttypes.h>

#include <arpa/inet.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, int *a3)
{
unsigned int v4; // [rsp+18h] [rbp-10h]
unsigned int v5; // [rsp+1Ch] [rbp-Ch]
int i; // [rsp+20h] [rbp-8h]
int j; // [rsp+24h] [rbp-4h]

v5 = 0;
for ( i = 0; i <= 0x1FFF; ++i )
{
v4 = 0;
for ( j = 0; j <= 0x1FFF && *(_BYTE *)(i + j + a1) == *(_BYTE *)(j + a2); ++j )
{
if ( (int)++v4 > (int)v5 )
{
*a3 = i;
v5 = v4;
}
if ( v5 == 15 )
break;
}
}
return v5;
}