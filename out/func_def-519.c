#include <stdlib.h>

#include <sys/types.h>

#include <unistd.h>

#include <assert.h>

# 1 
void do_parent_badness ( char* p )
{

   p[10] = 42;
}