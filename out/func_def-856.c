#include <ctype.h>

#include <sys/sysmacros.h>

# 1 
static void dev_from_part_nvme(char *dev_name)
{
 char *delim = strrchr(dev_name, 'p');
 if (delim)
  *delim = 0;
}