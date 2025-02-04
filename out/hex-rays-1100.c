#include <assert.h>

#include <stdio.h>

#include <stdlib.h>

#include <sys/types.h>

#include <sys/ipc.h>

#include <sys/sem.h>

# 1 
#include "defs.h"
unsigned __int64  func0(_DWORD *a1)
{
unsigned __int64 result; // rax
int v2; // [rsp+14h] [rbp-4h]

v2 = 0;
do
{
result = (unsigned int)*a1;
if ( (result & 0x80000000) == 0LL )
{
result = (unsigned __int64)a1;
++*a1;
v2 = 1;
}
}
while ( !v2 );
return result;
}