#include <errno.h>

#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <unistd.h>

#include <fcntl.h>

#include <linux/fb.h>

#include <linux/types.h>

#include <linux/videodev2.h>

#include <sys/ioctl.h>

#include <sys/mman.h>

# 1 
#include "defs.h"
int * func0(unsigned int a1, int a2, int *a3, int a4, char a5)
{
int v5; // eax
int *result; // rax
int v7; // [rsp+18h] [rbp-20h]
int v8; // [rsp+18h] [rbp-20h]
unsigned int v9; // [rsp+1Ch] [rbp-1Ch]
unsigned int v10; // [rsp+2Ch] [rbp-Ch]
unsigned int v11; // [rsp+2Ch] [rbp-Ch]
unsigned int v12; // [rsp+30h] [rbp-8h]
unsigned int v13; // [rsp+34h] [rbp-4h]

YKr_5050 = 29900;
YKg_5051 = 58700;
YKb_5052 = 11400;
CrKr_5053 = 49980;
CrKg_5054 = 41850;
CrKb_5055 = 8128;
CbKr_5056 = 16868;
CbKg_5057 = 33107;
CbKb_5058 = 49970;
v9 = HIBYTE(a1);
v10 = (29900 * BYTE2(a1) + 58700 * BYTE1(a1) + 11400 * (unsigned int)(unsigned __int8)a1) / 0x186A0;
v12 = (-16868 * BYTE2(a1) - 33107 * BYTE1(a1) + 49970 * (unsigned int)(unsigned __int8)a1 + 12800000) / 0x186A0;
v13 = (49980 * BYTE2(a1) - 41850 * BYTE1(a1) - 8128 * (unsigned int)(unsigned __int8)a1 + 12800000) / 0x186A0;
if ( a5 )
v7 = v10 | (v13 << 16) | (v9 << 24) | (v12 << 8);
else
v7 = v13 | (v10 << 16) | (v9 << 24) | (v12 << 8);
if ( a4 == 16 )
{
v11 = (YKr_5050 * BYTE2(a2) + BYTE1(a2) * YKg_5051 + (unsigned int)(unsigned __int8)a2 * YKb_5052) / 0x186A0;
if ( a5 )
{
v8 = (unsigned __int8)v7 << 8;
v5 = v12 | (v11 << 24) | (v13 << 16);
}
else
{
v8 = BYTE2(v7);
v5 = (v11 << 16) | (v13 << 24) | (v12 << 8);
}
v7 = v5 | v8;
}
result = a3;
*a3 = v7;
return result;
}