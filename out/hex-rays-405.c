#include <ctype.h>

#include <locale.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
unsigned __int64  func0(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
unsigned __int64 result; // rax
_DWORD *v5; // rax
_DWORD *v6; // [rsp+8h] [rbp-20h]
_DWORD *j; // [rsp+18h] [rbp-10h]
_DWORD *i; // [rsp+20h] [rbp-8h]

v6 = a2;
if ( a3 && a1 > 0 )
{
if ( a2 )
{
for ( i = a4; ; ++i )
{
result = (unsigned __int64)&a4[a1];
if ( (unsigned __int64)i >= result )
break;
v5 = v6++;
if ( *v5 )
*i |= a3;
}
}
else
{
for ( j = a4; ; ++j )
{
result = (unsigned __int64)&a4[a1];
if ( (unsigned __int64)j >= result )
break;
*j |= a3;
}
}
}
return result;
}