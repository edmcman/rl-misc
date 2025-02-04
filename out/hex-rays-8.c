#include <stdio.h>

#include <stdlib.h> 

#include <string.h> 

# 1 
#include "defs.h"
__int64  func0(__int64 a1, _DWORD *a2)
{
unsigned int v2; // eax
unsigned int v4; // [rsp+1Ch] [rbp-4h]

v4 = 0;
*a2 = 0;
while ( *(char *)(v4 + a1) > 47 && *(char *)(v4 + a1) <= 57 && v4 <= 8 )
{
v2 = v4++;
*a2 = 10 * *a2 + *(char *)(v2 + a1) - 48;
}
return v4;
}