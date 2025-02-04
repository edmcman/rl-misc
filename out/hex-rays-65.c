#include <stdint.h>

#include <time.h>

#include <sys/time.h>

#include <sys/syscall.h>

#include <asm/vsyscall.h>

# 1 
#include "defs.h"
_BYTE * func0(__int64 a1, _BYTE *a2)
{
_BYTE *v2; // rax
_BYTE *v3; // rax
__int64 v5; // [rsp+8h] [rbp-18h]
_BYTE *v6; // [rsp+10h] [rbp-10h]
_BYTE *v7; // [rsp+10h] [rbp-10h]
__int64 v8; // [rsp+18h] [rbp-8h]

v5 = a1;
v6 = a2;
if ( a1 < 0 )
{
v6 = a2 + 1;
*a2 = 45;
v5 = -a1;
}
v8 = v5;
do
{
v8 /= 10LL;
++v6;
}
while ( v8 );
v2 = v6;
v7 = v6 - 1;
*v2 = 0;
do
{
v3 = v7--;
*v3 = (char)v5 % 10 + 48;
v5 /= 10LL;
}
while ( v5 );
return a2;
}