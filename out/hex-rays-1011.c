
# 1 
#include "defs.h"
__int64  func0(int *a1)
{
if ( a1 )
{
close(a1[1]);
close(a1[2]);
a1[1] = a1[3];
a1[2] = -1;
a1[3] = -1;
}
return 0LL;
}