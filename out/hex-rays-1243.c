#include <stddef.h>	/* ptrdiff_t */

#include <ctype.h>	/* isdigit() */

#include <stdarg.h>

#include <stdlib.h>

#include <errno.h>

#include <syslog.h>

#include <sys/utsname.h>

#include <time.h>	/* time_t, strftime() */

#include <sys/time.h>	/* gettimeofday() */

#include <stdio.h>

#include <string.h>

#include <unistd.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, __int64 a2, unsigned __int64 a3)
{
_BYTE *v5; // [rsp+20h] [rbp-8h]

if ( !a2 )
return 0LL;
v5 = &a1[a2 - 1];
*v5 = 0;
do
{
if ( v5 == a1 )
return 0LL;
*--v5 = a3 % 0xA + 48;
a3 /= 0xAuLL;
}
while ( a3 );
return v5;
}