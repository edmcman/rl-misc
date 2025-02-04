#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <time.h>

# 1 
#include "defs.h"
_BYTE * func0(int a1, __int64 a2)
{
char v2; // cl
_BYTE *result; // rax
int v4; // [rsp+18h] [rbp-8h]
unsigned int i; // [rsp+1Ch] [rbp-4h]

v4 = 0;
for ( i = 128; i; i >>= 1 )
{
if ( (i & a1) != 0 )
v2 = 49;
else
v2 = 48;
*(_BYTE *)(v4++ + a2) = v2;
}
result = (_BYTE *)(v4 + a2);
*result = 0;
return result;
}