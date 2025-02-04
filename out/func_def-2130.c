#include <sys/types.h>

#include <sys/socket.h>

#include <sys/stat.h>

#include <err.h>

#include <fcntl.h>

#include <limits.h>

#include <stdio.h>

#include <string.h>

#include <unistd.h>

# 1 
static void
devnull(const char *test, int *fdp)
{
 int fd;

 fd = open("/dev/null", O_RDONLY);
 if (fd < 0)
  err(-1, "%s: open(/dev/null)", test);
 *fdp = fd;
}