#include <math.h>

#include <string.h>

#include <stdlib.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, float a2, float a3)
{
float v4; // [rsp+14h] [rbp-2Ch]
float v5; // [rsp+18h] [rbp-28h]
float v6; // [rsp+1Ch] [rbp-24h]
float v7; // [rsp+20h] [rbp-20h]
float v8; // [rsp+24h] [rbp-1Ch]
int v9; // [rsp+28h] [rbp-18h]
int v10; // [rsp+2Ch] [rbp-14h]
int v11; // [rsp+30h] [rbp-10h]
unsigned __int64 v12; // [rsp+38h] [rbp-8h]

v12 = __readfsqword(0x28u);
v4 = (float)(*(float *)(a1 + 20) * a2) + (float)(*(float *)(a1 + 4) * a3);
v5 = (float)(*(float *)(a1 + 24) * a2) + (float)(*(float *)(a1 + 8) * a3);
v6 = (float)(*(float *)(a1 + 16) * a3) + (float)((float)-*(float *)a1 * a2);
v7 = (float)(*(float *)(a1 + 20) * a3) + (float)((float)-*(float *)(a1 + 4) * a2);
v8 = (float)(*(float *)(a1 + 24) * a3) + (float)((float)-*(float *)(a1 + 8) * a2);
v9 = *(_DWORD *)(a1 + 32);
v10 = *(_DWORD *)(a1 + 36);
v11 = *(_DWORD *)(a1 + 40);
*(float *)a1 = (float)(*(float *)(a1 + 16) * a2) + (float)(*(float *)a1 * a3);
*(float *)(a1 + 4) = v4;
*(float *)(a1 + 8) = v5;
*(float *)(a1 + 16) = v6;
*(float *)(a1 + 20) = v7;
*(float *)(a1 + 24) = v8;
*(_DWORD *)(a1 + 32) = v9;
*(_DWORD *)(a1 + 36) = v10;
*(_DWORD *)(a1 + 40) = v11;
return __readfsqword(0x28u) ^ v12;
}