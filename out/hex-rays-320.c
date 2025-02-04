#include <assert.h>

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <fcntl.h>

#include <sys/types.h>

#include <aio.h>

# 1 
#include "defs.h"
unsigned int * func0(unsigned int *a1, unsigned __int64 a2, unsigned int *a3, unsigned int *a4, unsigned int *a5, unsigned __int64 a6)
{
unsigned int *v6; // rax
unsigned int *v7; // rax
unsigned int *v8; // rax
unsigned int *v11; // [rsp+18h] [rbp-28h]
unsigned int v13; // [rsp+34h] [rbp-Ch]
unsigned int *v14; // [rsp+38h] [rbp-8h]

v11 = a3;
v14 = a3;
while ( (unsigned __int64)a1 < a2 )
{
v6 = a1++;
v13 = *v6;
if ( (int)*v6 <= 0 )
{
while ( v14 < a4 && *v14 < v13 )
++v14;
if ( v14 != a4 && v13 == *v14 && (unsigned __int64)a5 < a6 )
{
v8 = a5++;
*v8 = v13;
}
}
else
{
while ( v11 < a4 && *v11 > v13 )
++v11;
if ( v11 != a4 && v13 == *v11 && (unsigned __int64)a5 < a6 )
{
v7 = a5++;
*v7 = v13;
}
}
}
return a5;
}