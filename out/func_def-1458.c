#include <stdlib.h>

# 1 
char *mstpcpy(char *out, const char *in)
{
 size_t i;

 i = 0;
 while (in[i] != '\0')
 {
  out[i] = in[i];
  i += 1;
 }
 out[i] = '\0';
 return (&(out[i]));
}