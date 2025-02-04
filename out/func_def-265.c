#include <stdbool.h>

# 1 
int vbyte_decompress(char *src,char *bound,unsigned int *n)
{
 int len = 0;

 *n = 0;
 while((src+len<bound) && (*(src+len) & 0x80))
 {
  *n += (*(src+len)&0x7f)<<(7*len);
  len++;
 }
 if(src+len == bound)
 {
  return 0;
 }
 *n += (*(src+len)&0x7f)<<(7*len);
 len++;
 return len;
}