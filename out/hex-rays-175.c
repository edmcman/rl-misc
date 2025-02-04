





# 1 
#include "defs.h"
ssize_t  func0(int a1, void *a2, int a3, unsigned int a4)
{
if ( a3 < 0 )
return 0xFFFFFFFFLL;
lseek(a1, (unsigned int)a3, 0);
return read(a1, a2, a4);
}