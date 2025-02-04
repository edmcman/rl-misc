#include <stdio.h>

#include <stdlib.h> 

# 1 
#include "defs.h"
__int64  func0(__int64 a1, _DWORD *a2)
{
int v2; // eax
int v3; // eax
int v5; // [rsp+1Ch] [rbp-4h]

v5 = 0;
*a2 = 0;
while ( (*(char *)(v5 + a1) > 47 && *(char *)(v5 + a1) <= 57 || *(char *)(v5 + a1) > 96 && *(char *)(v5 + a1) <= 102)
&& v5 <= 8 )
{
if ( *(char *)(v5 + a1) <= 47 || *(char *)(v5 + a1) > 57 )
{
v3 = v5++;
*a2 = 16 * *a2 + *(char *)(v3 + a1) - 87;
}
else
{
v2 = v5++;
*a2 = 16 * *a2 + *(char *)(v2 + a1) - 48;
}
}
return (unsigned int)v5;
}