#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <ctype.h>

#include <math.h>

#include <dlfcn.h>

# 1 
#include "defs.h"
float * func0(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float a7, float a8, float a9, float a10, float *a11, float *a12, float *a13, float *a14, float *a15, float *a16)
{
float v16; // xmm0_4
float v17; // xmm0_4
float v18; // xmm0_4
float v19; // xmm0_4
float v20; // xmm0_4
float v21; // xmm0_4
float v22; // xmm0_4
float v23; // xmm0_4
float v24; // xmm0_4
float v25; // xmm0_4
float v26; // xmm0_4
float v27; // xmm0_4
float v28; // xmm0_4
float *result; // rax

v16 = 1.164 * a8;
*a1 = v16;
*a5 = v16;
*a13 = v16;
v17 = 1.596 * a10 + (float)(0.0 * a9);
*a2 = v17;
v18 = 1.596 * a9 + (float)(0.0 * a10);
*a3 = v18;
v19 = -0.8129999999999999 * a10 + a9 * -0.391;
*a6 = v19;
v20 = -0.8129999999999999 * a9 + a10 * -0.391;
*a11 = v20;
v21 = (float)(0.0 * a10) + a9 * 2.018;
*a14 = v21;
v22 = (float)(0.0 * a9) + a10 * 2.018;
*a15 = v22;
v23 = a7 + (float)((float)(-128.0 * *a3) + (float)((float)(*a1 * -16.0) + (float)(-128.0 * *a2))) / 255.0;
*a4 = v23;
v24 = a7 + (float)((float)(-128.0 * *a11) + (float)((float)(*a5 * -16.0) + (float)(-128.0 * *a6))) / 255.0;
*a12 = v24;
v25 = a7 + (float)((float)(-128.0 * *a15) + (float)((float)(*a13 * -16.0) + (float)(-128.0 * *a14))) / 255.0;
*a16 = v25;
v26 = 0.5 - a8 / 2.0 + *a4;
*a4 = v26;
v27 = 0.5 - a8 / 2.0 + *a12;
*a12 = v27;
v28 = 0.5 - a8 / 2.0 + *a16;
result = a16;
*a16 = v28;
return result;
}