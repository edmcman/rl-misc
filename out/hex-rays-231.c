#include <sys/types.h>

#include <unistd.h>

#include <sys/wait.h>

# 1 
#include "defs.h"
__int64  func0(char *a1, char a2)
{
char v2; // dl

*a1 = (a2 >> 4) & 0xF;
a1[1] = a2 & 0xF;
if ( *a1 <= 9 )
v2 = *a1 + 48;
else
v2 = *a1 + 55;
*a1 = v2;
if ( a1[1] <= 9 )
a1[1] += 48;
else
a1[1] += 55;
return 0LL;
}