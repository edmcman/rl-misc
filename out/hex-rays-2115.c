#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <unistd.h>

#include <errno.h>

#include <sys/select.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <sys/ioctl.h>

#include <dirent.h>

#include <fcntl.h>

#include <linux/i2c.h>

#include <linux/i2c-dev.h>

# 1 
#include "defs.h"
int  func0(int a1, int a2, __int16 a3, __int64 a4)
{
int v5[2]; // [rsp+18h] [rbp-48h] BYREF
__int16 *v6; // [rsp+20h] [rbp-40h] BYREF
int v7; // [rsp+28h] [rbp-38h]
__int16 v8[4]; // [rsp+30h] [rbp-30h] BYREF
int *v9; // [rsp+38h] [rbp-28h]
__int16 v10; // [rsp+40h] [rbp-20h]
__int16 v11; // [rsp+42h] [rbp-1Eh]
__int16 v12; // [rsp+44h] [rbp-1Ch]
__int64 v13; // [rsp+48h] [rbp-18h]
unsigned __int64 v14; // [rsp+58h] [rbp-8h]

v5[1] = a1;
v5[0] = a2;
v14 = __readfsqword(0x28u);
v8[0] = 112;
v8[1] = 0;
v9 = v5;
v8[2] = 1;
v10 = 112;
v11 = 1;
v13 = a4;
v12 = a3;
v6 = v8;
v7 = 2;
return ioctl(a1, 0x707uLL, &v6);
}