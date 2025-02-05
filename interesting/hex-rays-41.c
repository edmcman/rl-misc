#include <ctype.h>

#include <stdarg.h>

#include <dirent.h>

#include <sys/stat.h>

#include <sys/time.h>

#include <sys/types.h>

#include <time.h>

# 1 
#include "defs.h"
__int64  func0(int a1, int *a2)
{
int v3; // [rsp+Ch] [rbp-14h]
int v4; // [rsp+Ch] [rbp-14h]
unsigned int v5; // [rsp+1Ch] [rbp-4h]

v3 = a1;
v5 = 0;
if ( a1 > 0 && a1 <= 114 )
{
if ( a1 > 32 )
{
v3 = a1 - 32;
if ( a1 - 32 > 24 )
{
v3 = a1 - 56;
if ( a1 - 56 > 0 )
{
if ( v3 > 35 )
{
v4 = a1 - 91;
if ( a1 - 91 > 0 )
{
if ( v4 > 23 )
{
v3 = 0;
}
else
{
v5 = 2;
v3 = v4 + 119;
}
}
else
{
v5 = 64;
v3 = a1 - 92;
}
}
else
{
v5 = 32;
}
}
else
{
v5 = 8;
v3 = a1 - 57;
}
}
else
{
v5 = 4;
}
}
else
{
v5 = 1;
}
}
else
{
v3 = 0;
}
if ( a2 )
*a2 = v3;
return v5;
}