#include <stdio.h>

#include <stdlib.h>

#include <string.h>             /* memset, strlen */

#include <ctype.h>

#include <errno.h>

#include <math.h>

#include <fcntl.h>

#include <unistd.h>

# 1 
#include "defs.h"
_DWORD * func0(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
_DWORD *result; // rax
int v5; // eax
int v6; // [rsp+1Ch] [rbp-14h]
int v7; // [rsp+20h] [rbp-10h]
int v8; // [rsp+20h] [rbp-10h]
int v9; // [rsp+24h] [rbp-Ch]
int v10; // [rsp+28h] [rbp-8h]
int v11; // [rsp+2Ch] [rbp-4h]

v6 = a1;
if ( a1 == 60 )
{
*a2 = 29;
*a3 = 2;
result = a4;
*a4 = 1900;
}
else
{
if ( a1 <= 59 )
v6 = a1 + 1;
v9 = 4 * (v6 + 2483588) / 146097;
v5 = 146097 * v9 + 3;
if ( v5 < 0 )
v5 = 146097 * v9 + 6;
v7 = v6 + 2483588 - (v5 >> 2);
v10 = 4000 * (v7 + 1) / 1461001;
v8 = v7 - 1461 * v10 / 4 + 31;
v11 = 80 * v8 / 2447;
*a2 = v8 + 2447 * v11 / -80;
*a3 = v11 + 2 - 12 * (v11 / 11);
result = a4;
*a4 = v11 / 11 + v10 + 100 * (v9 - 49);
}
return result;
}