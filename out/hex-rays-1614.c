#include <stdbool.h>

#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
int  func0(_DWORD *a1)
{
int result; // eax
int v2; // ebx
char v3; // [rsp+1Fh] [rbp-11h]

v3 = 0;
*a1 = 0;
result = getchar_unlocked();
v2 = result;
if ( result == 45 )
{
v3 = 1;
result = getchar_unlocked();
v2 = result;
}
while ( v2 > 47 && v2 <= 57 )
{
*a1 = v2 + 10 * *a1 - 48;
result = getchar_unlocked();
v2 = result;
}
if ( v3 )
{
result = (int)a1;
*a1 = -*a1;
}
return result;
}