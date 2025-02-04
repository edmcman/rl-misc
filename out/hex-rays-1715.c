#include <stdio.h>

# 1 
#include "defs.h"
int  func0(_WORD *a1)
{
int result; // eax

for ( *a1 = 0; ; *a1 = *a1 + result - 48 )
{
result = getchar();
if ( result <= 47 || result > 57 )
break;
*a1 *= 10;
}
return result;
}