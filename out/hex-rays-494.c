#include <string.h>

#include <strings.h>

#include <ctype.h>

#include <sys/types.h>

#include <stdarg.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
#include "defs.h"
unsigned __int64  func0(double *a1, double a2)
{
int i; // [rsp+1Ch] [rbp-34h]
double v4; // [rsp+20h] [rbp-30h] BYREF
__int64 v5; // [rsp+28h] [rbp-28h]
double v6; // [rsp+30h] [rbp-20h]
double v7; // [rsp+38h] [rbp-18h]
double v8; // [rsp+40h] [rbp-10h]
unsigned __int64 v9; // [rsp+48h] [rbp-8h]

v9 = __readfsqword(0x28u);
v6 = a2;
v7 = 1.0;
for ( i = 0; i <= 99; ++i )
{
v5 = (unsigned int)(int)v6;
if ( v6 + 1.0 >= (double)(int)v6 && (double)(int)v5 >= v6 - 1.0 )
break;
v6 = 0.1 * v6;
v7 = 10.0 * v7;
}
if ( i == 100 )
{
*a1 = 0.0;
}
else if ( i )
{
v8 = func0(&v4, a2 - (double)(int)v5 * v7);
*a1 = v4 + (double)(int)v5 * v7;
}
else
{
*a1 = (double)(int)v5;
}
return __readfsqword(0x28u) ^ v9;
}