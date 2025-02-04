#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <errno.h>

# 1 
#include "defs.h"
unsigned __int64  func0(_BYTE *a1, __int64 a2, int a3, int a4)
{
unsigned __int64 result; // rax
unsigned __int8 v5; // [rsp+1Fh] [rbp-9h]
int i; // [rsp+20h] [rbp-8h]
int j; // [rsp+24h] [rbp-4h]

for ( i = 0; i < a3; ++i )
{
if ( !*(_BYTE *)(i + a2) )
{
result = (unsigned __int64)a1;
*a1 = 0;
return result;
}
}
for ( j = 0; j < a4; ++j )
{
v5 = *(_BYTE *)(a3 + j + a2);
result = v5;
a1[j] = v5;
if ( !v5 )
return result;
}
result = (unsigned __int64)&a1[a4];
*(_BYTE *)result = 0;
return result;
}