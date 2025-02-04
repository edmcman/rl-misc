#include <stdio.h>

#include <signal.h>

#include <sys/types.h>

# 1 
void
store(unsigned long *p, unsigned long val)
{
    *p = val;
}