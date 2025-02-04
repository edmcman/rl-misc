#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <ctype.h>

#include <math.h>

#include <limits.h>

# 1 
#include "defs.h"
__int64  func0(char *a1)
{
int v1; // eax
unsigned int v2; // eax
unsigned int v4; // [rsp+10h] [rbp-8h]
int i; // [rsp+14h] [rbp-4h]

for ( i = 0; i <= 2; ++i )
{
v1 = a1[i];
if ( !a1[i] )
return 0LL;
if ( v1 >= 0 && v1 <= 117 && v1 >= 65 )
{
v2 = v1 - 65;
if ( v2 <= 0x34 )
__asm { jmp rax }
}
a1[i] = 0;
}
if ( a1[1] * *a1 * a1[2] )
v4 = a1[1] + 16 * (*a1 - 1) + 4 * (a1[2] - 1);
else
v4 = 0;
return v4;
}