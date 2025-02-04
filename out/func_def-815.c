#include <stdio.h>

#include <string.h>

#include <ctype.h>

#include <stdarg.h>

#include <stdlib.h>

#include <time.h>

#include <unistd.h>

#include <malloc.h>

# 1 
char *strupr(char *name)
{
int i;
if (!name)
  return name;
for (i = 0; name[i]; i++)
  if ((name[i] >= 'a') && (name[i] <= 'z'))
    name[i] -= ('a' - 'A');
return name;
}