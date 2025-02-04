#include <signal.h>

#include <dlfcn.h>

#include <stddef.h>

#include <stdio.h>

#include <stdlib.h>

#include <pthread.h>

#include <execinfo.h>

#include <memory.h>

#include <stdarg.h>

# 1 
static int atomic_add_return(int *v, int i)
{
int rc;
__asm__ (
"lock\n\t"
"xaddl %0,(%1)"
:"=r" (rc)
:"r" (v), "0" (i)
:"memory" );
return rc+i;
}