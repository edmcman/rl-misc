#include <ctype.h>

#include <stdlib.h>

#include <signal.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2, double a3)
{
double v4; // [rsp+0h] [rbp-38h]
int v5; // [rsp+18h] [rbp-20h]
double v6; // [rsp+20h] [rbp-18h]
double v7; // [rsp+28h] [rbp-10h]

v4 = a3;
if ( a3 < 0.0 )
v4 = 0.0;
if ( v4 > 100.0 )
v4 = 100.0;
v5 = (int)v4;
if ( (int)v4 > 99 )
v5 = 99;
if ( v5 > 98 )
v6 = 256.0;
else
v6 = (double)*(unsigned __int8 *)(v5 + 1LL + a1);
v7 = (double)*(unsigned __int8 *)(v5 + a1);
return (unsigned int)(int)((double)a2 * (((v4 - (double)v5) * (v6 - v7) + v7) * 0.00390625));
}