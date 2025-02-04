#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <time.h>

#include <limits.h>/*UINT_MAX*/

# 1 
#include "defs.h"
__int64  func0(int a1, int a2, unsigned int a3, unsigned int a4, _DWORD *a5, _DWORD *a6)
{
int v7; // [rsp+2Ch] [rbp-4h]

v7 = 16 * a2;
if ( 16 * a1 + 32 > a3 )
*a5 = a3 - 16 * a1;
else
*a5 = 32;
if ( v7 + 32 > a4 )
*a6 = a4 - v7;
else
*a6 = 32;
return 1LL;
}