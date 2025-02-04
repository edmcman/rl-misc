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
char *cat_str (char *dest, char *src) {
  char *ptr = (char *) NULL;
  char *dptr = (char *) NULL;

  for (ptr = src, dptr = dest; *ptr != '\0'; ptr++) {
 *dptr = *ptr;
 dptr++;
  }

  *dptr = '\0';

  return dptr;
}