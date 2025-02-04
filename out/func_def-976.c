#include <sys/types.h>

#include <sys/stat.h>

#include <unistd.h>

#include <errno.h>

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

# 1 
void chdir_f_(const char *path, int *ierr)
{
  if (*ierr = chdir(path)) *ierr=errno;
}