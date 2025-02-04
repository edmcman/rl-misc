#include <stdio.h>

#include <time.h>

#include <errno.h>

#include <unistd.h>

#include <sys/types.h>

#include <sys/times.h>

#include <sys/utsname.h>

#include <string.h>

# 1 
#include "defs.h"
int  func0(char *a1, int a2)
{
return gethostname(a1, a2);
}