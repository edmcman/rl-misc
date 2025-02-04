#include <string.h>

#include <stdlib.h>

#include <pwd.h>         /* needed in file_openfile */

#include <sys/types.h>

#include <sys/stat.h>

#include <unistd.h>      /* contains prototype of UNIX file truncate fn  */

# 1 
int file_getoptions(int *options)
{
  *options = 0;
  return(0);
}