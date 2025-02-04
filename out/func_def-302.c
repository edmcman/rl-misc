#include <time.h>

#include <sys/stat.h>

# 1 
static void
safe_strcpy(char *dst,
            const char *src)
{
  while (*src)
    *dst++ = *src++;

  *dst = '\0';
}