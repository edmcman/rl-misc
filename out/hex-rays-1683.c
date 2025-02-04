#include <sys/types.h>

#include <sys/stat.h>

#include <errno.h>

#include <unistd.h>

#include <libgen.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(int a1, char *a2, int a3)
{
int v6; // [rsp+1Ch] [rbp-4h]

do
{
v6 = write(a1, a2, a3);
if ( v6 > 0 )
{
a3 -= v6;
a2 += v6;
}
}
while ( v6 > 0 && a3 > 0 );
return (unsigned int)v6;
}