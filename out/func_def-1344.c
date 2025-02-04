#include <sys/mman.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <unistd.h>

#include <errno.h>

#include <sys/syscall.h>

#include <stdarg.h>

# 1 
char *AppendString( char *target, const char *source )
{
 while ((*target = *source))
  source++, target++;
 return target;
}