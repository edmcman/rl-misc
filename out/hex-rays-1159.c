#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <unistd.h>

#include <err.h>

#include <time.h>

#include <errno.h>

#include <utime.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, unsigned __int64 a2)
{
char v2; // dl
__int64 result; // rax
unsigned __int64 v4; // [rsp+0h] [rbp-20h]
__int64 v5; // [rsp+18h] [rbp-8h]

v4 = a2;
*(_BYTE *)(a1 + 11) = 32;
v5 = a1 + 10;
*(_BYTE *)(a1 + 10) = (a2 & 7) + 48;
while ( 1 )
{
result = v5;
if ( v5 == a1 )
break;
v4 >>= 3;
if ( v4 )
v2 = (v4 & 7) + 48;
else
v2 = 32;
*(_BYTE *)--v5 = v2;
}
return result;
}