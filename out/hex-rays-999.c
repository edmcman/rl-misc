
# 1 
#include "defs.h"
double  func0(_QWORD *a1)
{
*a1 = (1103515245 * (unsigned int)*a1 + 12345) & 0x7FFFFFFF;
return (double)(int)*a1 / 1073741824.0 - 1.0;
}