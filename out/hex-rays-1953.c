#include <float.h>

# 1 
#include "defs.h"
double  func0(__int64 a1, int *a2)
{
if ( *a2 > 0 )
--*a2;
return *(double *)(8LL * *a2 + a1);
}