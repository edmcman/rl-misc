#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <ctype.h>

# 1 
#include "defs.h"
double  func0(__int64 *a1)
{
*a1 = (100 * *a1 + 1000) % 6000;
return (double)(int)*a1 / (double)6000;
}