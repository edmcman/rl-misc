#include <stddef.h>

#include <stdarg.h>

#include <limits.h>

#include <math.h>

#include <ctype.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <setjmp.h>

#include <errno.h>

#include <time.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int *a2)
{
int v3; // [rsp+1Ch] [rbp-14h]
int i; // [rsp+20h] [rbp-10h]
int v5; // [rsp+24h] [rbp-Ch]
unsigned int v6; // [rsp+28h] [rbp-8h]
int v7; // [rsp+2Ch] [rbp-4h]

v5 = 0;
v6 = 0;
v7 = 0;
v3 = 0;
for ( i = 1; i / 2 < *a2; i *= 2 )
{
if ( *(int *)(4LL * v3 + a1) > 0 )
{
v5 += *(_DWORD *)(4LL * v3 + a1);
if ( v5 > i / 2 )
{
v7 = i;
v6 = v5;
}
}
if ( v5 == *a2 )
break;
++v3;
}
*a2 = v7;
return v6;
}