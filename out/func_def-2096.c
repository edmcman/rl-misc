#include <stddef.h>

#include <stdlib.h>

#include <string.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <limits.h>

#include <unistd.h>

#include <fcntl.h>

#include <dirent.h>

#include <stdio.h>

#include <errno.h>

# 1 
void dclose_c(int fd,int *iostat)



{
  *iostat = ( close(fd) < 0 ? errno : 0 );
}