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
static char *_diag_ulong_to_dec(char *field, size_t n, unsigned long ulo) {
   char *np = field+n;

   if (n == 0) return NULL;
   *--np = '\0';


   do { if (np==field) return NULL; *--np = '0'+(ulo%10); } while (ulo/=10);
   return np;
}