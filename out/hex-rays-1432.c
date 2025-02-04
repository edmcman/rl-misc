#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <unistd.h>

#include <math.h>

#include <sys/time.h>

#include <getopt.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(unsigned int a1, int a2, int a3, __int64 a4, int a5, __int64 a6, int a7, __int64 a8, int a9)
{
__int64 result; // rax
unsigned int i; // [rsp+2Ch] [rbp-14h]
unsigned int k; // [rsp+2Ch] [rbp-14h]
int j; // [rsp+30h] [rbp-10h]
int l; // [rsp+30h] [rbp-10h]
int v14; // [rsp+34h] [rbp-Ch]
int v15; // [rsp+38h] [rbp-8h]
float v16; // [rsp+3Ch] [rbp-4h]
float v17; // [rsp+3Ch] [rbp-4h]

result = a1;
if ( (_BYTE)a1 == 110 || (_BYTE)a1 == 116 )
{
if ( a5 == a2 )
{
v14 = a3;
v15 = a2;
}
else
{
v14 = a2;
v15 = a3;
}
if ( (_BYTE)a1 == 110 )
{
for ( i = 0; ; ++i )
{
result = i;
if ( (int)i >= v15 )
break;
v16 = 0.0;
for ( j = 0; j < v14; ++j )
v16 = (float)(*(float *)(4LL * (a7 + j) + a6) * *(float *)(4LL * (int)(v14 * i + j) + a4)) + v16;
*(float *)(4LL * (int)(i + a9) + a8) = v16;
}
}
else
{
for ( k = 0; ; ++k )
{
result = k;
if ( (int)k >= v15 )
break;
v17 = 0.0;
for ( l = 0; l < v14; ++l )
v17 = (float)(*(float *)(4LL * (a7 + l) + a6) * *(float *)(4LL * (int)(v14 * l + k) + a4)) + v17;
*(float *)(4LL * (int)(k + a9) + a8) = v17;
}
}
}
return result;
}