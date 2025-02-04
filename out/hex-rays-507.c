



# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, char a2)
{
_BYTE *v2; // rax
int v4; // [rsp+10h] [rbp-Ch]
_BYTE *v5; // [rsp+14h] [rbp-8h]

v4 = 0;
v5 = a1;
do
{
if ( a2 == *v5 )
++v4;
else
v5[-v4] = *v5;
v2 = v5++;
}
while ( *v2 );
return a1;
}