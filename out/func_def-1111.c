#include <stdint.h>

# 1 
void
write_text(char *dest, const char *src)
{
 while (*src != '\0')
  *(dest++) = *(src++);
}