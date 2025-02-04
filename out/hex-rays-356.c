#include <stdio.h>

#include <string.h>

#include <errno.h>

#include <stdlib.h>

#include <inttypes.h>

#include <unistd.h>

# 1 
#include "defs.h"
_BYTE * func0(__int64 a1, __int64 a2)
{
_BYTE *result; // rax
int v3; // [rsp+14h] [rbp-Ch]
int v4; // [rsp+18h] [rbp-8h]
int v5; // [rsp+1Ch] [rbp-4h]

v3 = 0;
v5 = 0;
v4 = 0;
while ( *(_BYTE *)(v3 + a1) )
{
if ( *(_BYTE *)(v3 + a1) == 93 )
{
v4 = 1;
v5 = 0;
*(_BYTE *)(v3 + a1) = 0;
if ( *(_BYTE *)(v3 + 1LL + a1) == 82 || *(_BYTE *)(v3 + 1LL + a1) == 83 || *(_BYTE *)(v3 + 1LL + a1) == 84 )
*(_BYTE *)(++v3 + a1) = 0;
}
if ( v4 == 1 )
*(_BYTE *)(v5 + a2) = *(_BYTE *)(v3 + a1);
++v3;
++v5;
}
result = (_BYTE *)(v5 + a2);
*result = 0;
return result;
}