#include <assert.h>

#include <float.h>

#include <limits.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(int *a1, int a2, int a3, _QWORD *a4)
{
int v4; // eax
int v5; // eax
__int64 v6; // rax
__int64 v7; // rax
__int64 result; // rax
__int64 v9; // [rsp+18h] [rbp-20h]
__int64 v10; // [rsp+20h] [rbp-18h]
__int64 v11; // [rsp+28h] [rbp-10h]

v4 = 1;
if ( a2 > 0 )
v4 = a2;
v9 = v4 - 1;
v5 = 1;
if ( a3 > 0 )
v5 = a3;
v10 = v5 - 1;
if ( a2 < *a1 )
v6 = a2;
else
v6 = *a1 - 1;
v11 = v6;
if ( a3 < a1[1] )
v7 = a3;
else
v7 = a1[1] - 1;
*a4 = (v10 * *a1 + v9) * a1[2];
a4[1] = (v7 * *a1 + v9) * a1[2];
a4[2] = (v10 * *a1 + v11) * a1[2];
result = (v7 * *a1 + v11) * a1[2];
a4[3] = result;
return result;
}