#include <sys/cdefs.h>

#include <stddef.h>

# 1 
size_t
openpam_strlset(char *str, int ch, size_t size)
{
 size_t len;

 for (len = 0; *str && size > 1; ++len, --size)
  *str++ = (char)ch;
 *str = '\0';
 return (++len);
}