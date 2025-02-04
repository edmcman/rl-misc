#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#include <stdio.h>

#include <errno.h>

#include <sys/stat.h>

#include <sys/types.h>

#include <unistd.h>

#include <time.h>

#include <dirent.h>

# 1 
int strcpy_limit (char *dest, char *src, int limit) {
  char *sptr = (char *) NULL;
  char *dptr = (char *) NULL;
  int count = 0;

  for (sptr = src, dptr = dest;
    *sptr != '\0' &&
   count < limit;
    sptr++, dptr++, count++) {
 *dptr = *sptr;
  }
  *dptr = '\0';

  return count;
}