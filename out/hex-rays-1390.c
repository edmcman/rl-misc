
# 1 
#include "defs.h"
__int64  func0(unsigned int *a1)
{
*a1 = (1103515245 * *a1 + 12345) & 0x7FFFFFFF;
return *a1;
}