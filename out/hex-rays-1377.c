#include <sys/mman.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <unistd.h>

#include <errno.h>

#include <sys/syscall.h>

#include <stdarg.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2)
{
int v2; // eax
int v3; // eax
char v6; // [rsp+13h] [rbp-9h]
int v7; // [rsp+14h] [rbp-8h]
int v8; // [rsp+18h] [rbp-4h]

v7 = 0;
v8 = 0;
do
{
v2 = v7++;
*(_BYTE *)(v2 + a1) = a2 % 10 + 48;
a2 /= 10;
}
while ( a2 );
*(_BYTE *)(v7 + a1) = 0;
while ( v8 < v7 - 1 )
{
v6 = *(_BYTE *)(--v7 + a1);
*(_BYTE *)(v7 + a1) = *(_BYTE *)(v8 + a1);
v3 = v8++;
*(_BYTE *)(a1 + v3) = v6;
}
return v7 + (__int64)v8 + a1;
}