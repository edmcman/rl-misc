
# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
int i; // [rsp+14h] [rbp-4h]

for ( i = 0; *(_BYTE *)(i + a1); ++i )
{
if ( *(char *)(i + a1) <= 64 || *(char *)(i + a1) > 90 )
{
if ( *(char *)(i + a1) > 96 && *(char *)(i + a1) <= 122 )
{
*(_BYTE *)(i + a1) -= 97;
*(_BYTE *)(i + a1) = (char)(*(_BYTE *)(i + a1) + 42) % 26;
*(_BYTE *)(i + a1) += 97;
}
}
else
{
*(_BYTE *)(i + a1) -= 65;
*(_BYTE *)(i + a1) = (char)(*(_BYTE *)(i + a1) + 42) % 26;
*(_BYTE *)(i + a1) += 65;
}
}
return a1;
}