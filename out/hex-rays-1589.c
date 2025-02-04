#include <math.h>

#include <float.h>

#include <stdbool.h>

#include <stdlib.h>

#include <string.h>

#include <time.h>

#include <stdio.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, int a2)
{
unsigned __int64 v2; // rax
void *v3; // rsp
_BYTE v5[3]; // [rsp+8h] [rbp-40h] BYREF
_BYTE v6[5]; // [rsp+Bh] [rbp-3Dh] BYREF
__int64 v7; // [rsp+10h] [rbp-38h]
int v8; // [rsp+20h] [rbp-28h]
int j; // [rsp+24h] [rbp-24h]
int i; // [rsp+28h] [rbp-20h]
float v11; // [rsp+2Ch] [rbp-1Ch]
__int64 v12; // [rsp+30h] [rbp-18h]
int *v13; // [rsp+38h] [rbp-10h]
unsigned __int64 v14; // [rsp+40h] [rbp-8h]

v7 = a1;
*(_DWORD *)&v6[1] = a2;
v14 = __readfsqword(0x28u);
v12 = a2 - 1LL;
v2 = 16 * ((4LL * a2 + 15) / 0x10uLL);
while ( v5 != &v5[-(v2 & 0xFFFFFFFFFFFFF000LL)] )
;
v3 = alloca(v2 & 0xFFF);
if ( (v2 & 0xFFF) != 0 )
*(_QWORD *)&v5[(v2 & 0xFFF) - 8] = *(_QWORD *)&v5[(v2 & 0xFFF) - 8];
v13 = (int *)(4 * ((unsigned __int64)v6 >> 2));
for ( i = 0; i < *(int *)&v6[1]; ++i )
v13[i] = 0;
for ( i = 0; i < *(int *)&v6[1]; ++i )
{
for ( j = i; j < *(int *)&v6[1]; ++j )
{
if ( *(float *)(4LL * j + v7) == *(float *)(4LL * i + v7) )
*(float *)&v13[i] = *(float *)&v13[i] + 1.0;
}
}
v11 = *(float *)v13;
v8 = 0;
for ( i = 0; i < *(int *)&v6[1]; ++i )
{
if ( *(float *)&v13[i] > v11 )
{
v8 = i;
v11 = *(float *)&v13[i];
}
}
return __readfsqword(0x28u) ^ v14;
}