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
char * func0(char *param_1,long param_2,ulong param_3){ulong local_30;char *local_10;if (param_2 == 0) {local_10 = (char *)0x0;}else {local_10 = param_1 + param_2 + -1;*local_10 = '\0';local_30 = param_3;do {if (local_10 == param_1) {return (char *)0x0;}local_10 = local_10 + -1;*local_10 = (char)local_30 + ((char)(local_30 / 10 << 2) + (char)(local_30 / 10)) * -2 + '0';local_30 = local_30 / 10;} while (local_30 != 0);}return local_10;}