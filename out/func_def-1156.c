
# 1 
char *ft_strcpy(char *dst, const char *src)
{
 char *s;

 s = dst;
 while (*src)
  *s++ = *src++;
 *s++ = '\0';
 return (dst);
}