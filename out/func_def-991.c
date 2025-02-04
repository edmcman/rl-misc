#include <stdio.h>

#include <sys/types.h>

#include <fcntl.h>

#include <unistd.h>

#include <stdlib.h>

#include <string.h>

#include <errno.h>

#include <sys/syscall.h>

# 1 
int getdents(int fd, unsigned char *buf, size_t size)
{
 return syscall(SYS_getdents, fd, buf, size);
}