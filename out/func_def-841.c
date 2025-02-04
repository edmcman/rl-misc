#include <stdio.h>

#include <malloc.h>

#include <string.h>

#include <sys/stat.h>

#include <sys/types.h>

#include <fcntl.h>

#include <unistd.h>

#include <stdlib.h>

#include <ctype.h>

#include <errno.h>

# 1 
void
toggle_flag (short *flag)
{
  if (*flag == 1)
  {
    *flag = 0;
  }
  else
  {
    *flag = 1;
  }
}