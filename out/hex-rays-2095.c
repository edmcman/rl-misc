#include <openssl/dh.h>

#include <openssl/pem.h>

#include <openssl/bn.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, __int64 a2, int a3)
{
unsigned __int64 result; // rax
unsigned int i; // [rsp+1Ch] [rbp-8h]
int v5; // [rsp+20h] [rbp-4h]

for ( i = 0; ; ++i )
{
result = i;
if ( (int)i >= a3 )
break;
v5 = *(char *)((int)i + a2);
if ( v5 <= 96 || v5 > 122 )
{
if ( (v5 <= 47 || v5 > 57) && (v5 <= 64 || v5 > 90) )
{
if ( !*(_BYTE *)((int)i + a2) )
{
result = (int)i + a1;
*(_BYTE *)result = 0;
return result;
}
*(_BYTE *)((int)i + a1) = 95;
}
else
{
*(_BYTE *)((int)i + a1) = v5;
}
}
else
{
*(_BYTE *)((int)i + a1) = v5 - 32;
}
}
return result;
}