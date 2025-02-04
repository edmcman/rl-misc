#include <errno.h>

#include <limits.h>

#include <signal.h>

#include <stdarg.h>

#include <string.h>

#include <stdlib.h>

#include <time.h>

# 1 
#include "defs.h"
_BOOL8  func0(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
if ( a3 )
*a3 = a2 + a1;
return a2 > ~a1;
}