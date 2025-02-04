
# 1 
#include "defs.h"
__int64  func0(unsigned int *a1)
{
*a1 = (*a1 << 24) | (*a1 >> 8) & 0xFF00 | (*a1 << 8) & 0xFF0000 | ((unsigned __int64)*a1 >> 24);
return *a1;
}