#include <assert.h>

#include <errno.h>

#include <stdbool.h>

#include <stddef.h>

#include <stdint.h>

#include <stdlib.h>

#include <string.h>

#include <time.h>

# 1 
#include "defs.h"
_BOOL8  func0(const char *a1, _QWORD *a2)
{
__int64 v3; // [rsp+18h] [rbp-8h]

v3 = strcasestr(a1, "server") != 0LL;
if ( strcasestr(a1, "network") )
++v3;
if ( strcasestr(a1, "terminal") )
++v3;
if ( strcasestr(a1, "host") )
++v3;
if ( strcasestr(a1, "router") )
++v3;
if ( strcasestr(a1, "switch") )
++v3;
if ( strcasestr(a1, "equipment") )
++v3;
if ( strcasestr(a1, "HDD") )
++v3;
if ( strcasestr(a1, "storage") )
++v3;
if ( strcasestr(a1, "CPU") )
++v3;
if ( strcasestr(a1, "load") )
++v3;
if ( strcasestr(a1, "traffic") )
++v3;
if ( strcasestr(a1, "latency") )
++v3;
if ( strcasestr(a1, "hop") )
++v3;
if ( strcasestr(a1, "ttl") )
++v3;
if ( strcasestr(a1, "as") )
++v3;
if ( strcasestr(a1, "assoc") )
++v3;
if ( strcasestr(a1, "less") )
++v3;
if ( strcasestr(a1, "greater") )
++v3;
if ( strcasestr(a1, "equal") )
++v3;
if ( strcasestr(a1, "than") )
++v3;
if ( strcasestr(a1, "ge") )
++v3;
if ( strcasestr(a1, "gt") )
++v3;
if ( strcasestr(a1, "eq") )
++v3;
if ( strcasestr(a1, "le") )
++v3;
if ( strcasestr(a1, "lt") )
++v3;
if ( strcasestr(a1, "max") )
++v3;
if ( strcasestr(a1, "min") )
++v3;
*a2 = v3;
*_errno_location() = 0;
return v3 != 0;
}