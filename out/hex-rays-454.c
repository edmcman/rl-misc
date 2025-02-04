#include <errno.h>

#include <string.h>

#include <unistd.h>

#include <time.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, int a2, unsigned int a3)
{
unsigned __int64 result; // rax
int v4; // eax
int i; // [rsp+18h] [rbp-8h]
int v6; // [rsp+1Ch] [rbp-4h]

result = a3;
v6 = 0;
if ( a1 && a2 )
{
for ( i = 0; i < a2 && *(_BYTE *)(i + a1); ++i )
{
if ( (_BYTE)a3 != *(_BYTE *)(i + a1) )
{
v4 = v6++;
*(_BYTE *)(a1 + v4) = *(_BYTE *)(i + a1);
}
}
result = v6 + a1;
*(_BYTE *)result = 0;
}
return result;
}