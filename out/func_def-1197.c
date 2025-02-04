#include <fcntl.h>

#include <sys/mman.h>

# 1 
static int update (long *ptr)
{
    return ((*ptr) ++);
}