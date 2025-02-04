#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/types.h>

#include <sys/stat.h>

# 1 
static void delchar(char *p)
{
  while (p[0]) {
    p[0] = p[1];
    if (p[0])
      p++;
  }
}