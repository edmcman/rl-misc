
# 1 
#include "defs.h"
_BYTE * func0(__int64 a1, char a2)
{
_BYTE *result; // rax
int i; // [rsp+18h] [rbp-4h]

for ( i = 0; i <= 15; ++i )
{
result = (_BYTE *)(i + a1);
*result = a2;
}
return result;
}