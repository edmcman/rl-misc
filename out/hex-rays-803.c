#include <stdio.h>

#include <math.h>

# 1 
#include "defs.h"
double  func0(_QWORD *a1)
{
*a1 = 1103515245LL * *a1 + 12345;
return (double)((*a1 >> 16) & 0x7FFF) / 32767.0;
}