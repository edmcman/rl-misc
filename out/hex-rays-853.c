#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <stdarg.h>

#include <malloc.h>

#include <alloca.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, _DWORD *a2)
{
__int64 result; // rax

result = *(_BYTE *)((int)--*a2 + a1) & 0xC0;
if ( (_DWORD)result == 128 )
{
result = *(_BYTE *)((int)--*a2 + a1) & 0xC0;
if ( (_DWORD)result == 128 )
{
result = *(_BYTE *)((int)--*a2 + a1) & 0xC0;
if ( (_DWORD)result == 128 )
result = (unsigned int)--*a2;
}
}
return result;
}