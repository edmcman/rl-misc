#include <errno.h>

#include <math.h>

#include <signal.h>

#include <stdarg.h>

#include <stdint.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/select.h>

#include <sys/time.h>

#include <syslog.h>

#include <time.h>

#include <unistd.h>

# 1 
#include "defs.h"
double * func0(double *a1, double a2)
{
double *result; // rax

if ( *a1 > a2 )
*a1 = a2;
result = a1;
if ( -a2 > *a1 )
{
result = a1;
*a1 = -a2;
}
return result;
}