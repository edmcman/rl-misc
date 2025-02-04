#include <sys/types.h>

#include <dirent.h>

#include <regex.h>

#include <stdio.h>

#include <string.h>

#include <stdlib.h>

# 1 
static void cvtPattern(char pattern[], const char *bashpat) {
   char *p = pattern;

   *p++ = '^';
   while (*bashpat != '\0') {
      switch (*bashpat) {
      case '*':
         *p++ = '.';
  *p++ = '*';
  break;
      case '.':
         *p++ = '\\';
  *p++ = '.';
  break;
      case '?':
         *p++ = '.';
  break;
      default:
         *p++ = *bashpat;
      }
      bashpat++;
   }
   *p++ = '$';
   *p = '\0';
}