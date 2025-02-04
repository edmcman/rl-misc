#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <stdarg.h>

#include <malloc.h>

#include <alloca.h>

# 1 
#include "defs.h"
int * func0(__int64 a1, int *a2)
{
int v2; // eax
int *result; // rax

v2 = (*a2)++;
result = (int *)*(unsigned __int8 *)(v2 + a1);
if ( (char)result < 0 )
{
result = (int *)(*(_BYTE *)(*a2 + a1) & 0xC0);
if ( (_DWORD)result == 128 )
{
result = (int *)(*(_BYTE *)(++*a2 + a1) & 0xC0);
if ( (_DWORD)result == 128 )
{
result = (int *)(*(_BYTE *)(++*a2 + a1) & 0xC0);
if ( (_DWORD)result == 128 )
{
result = a2;
++*a2;
}
}
}
}
return result;
}