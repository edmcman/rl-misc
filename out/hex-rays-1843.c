
# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1)
{
_BYTE *result; // rax
int i; // [rsp+10h] [rbp-8h]
int j; // [rsp+14h] [rbp-4h]

for ( i = 0; a1[i] && a1[i] == 48; ++i )
;
if ( a1[i] )
{
for ( j = i; a1[j]; ++j )
a1[j - i] = a1[j];
result = &a1[j - i];
*result = 0;
}
else
{
*a1 = 48;
result = a1 + 1;
a1[1] = 0;
}
return result;
}