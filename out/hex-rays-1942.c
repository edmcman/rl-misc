
# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, __int64 a2)
{
int i; // [rsp+18h] [rbp-38h]
int j; // [rsp+1Ch] [rbp-34h]
char v5[40]; // [rsp+20h] [rbp-30h] BYREF
unsigned __int64 v6; // [rsp+48h] [rbp-8h]

v6 = __readfsqword(0x28u);
strcpy(v5, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
for ( i = 0; *(_BYTE *)(i + a1); ++i )
{
for ( j = 0; j <= 26; ++j )
{
if ( *(_BYTE *)(i + a1) == *(_BYTE *)(i + a2) )
*(_BYTE *)(a1 + i) = v5[j];
}
}
return __readfsqword(0x28u) ^ v6;
}