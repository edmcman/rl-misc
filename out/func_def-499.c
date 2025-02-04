
# 1 
int Q_strlcpy(char *dst, const char *src, int size)
{
 const char *s = src;

 while (*s)
 {
  if (size > 1)
  {
   *dst++ = *s;
   size--;
  }
  s++;
 }
 if (size > 0)
 {
  *dst = '\0';
 }

 return s - src;
}