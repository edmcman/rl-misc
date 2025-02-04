#include <stdio.h>

#include <string.h>

#include <stdarg.h>

#include <unistd.h>

#include <fcntl.h>

# 1 
#include "defs.h"
__int64  func0(int a1, __int64 a2)
{
int v2; // eax
char v5; // [rsp+17h] [rbp-9h]
int v6; // [rsp+18h] [rbp-8h]
int i; // [rsp+1Ch] [rbp-4h]

v6 = 0;
do
{
v2 = v6++;
*(_BYTE *)(v2 + a2) = a1 % 10 + 48;
a1 /= 10;
}
while ( a1 );
*(_BYTE *)(v6 + a2) = 0;
for ( i = 0; i < v6 / 2; ++i )
{
v5 = *(_BYTE *)(i + a2);
*(_BYTE *)(i + a2) = *(_BYTE *)(v6 - 1 - i + a2);
*(_BYTE *)(a2 + v6 - 1 - i) = v5;
}
return a2;
}