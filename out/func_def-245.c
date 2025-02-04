
# 1 
void sal_strcpy(char *dest, const char *src)
{
 while(*src)
  *dest++ = *src++;
 *dest=0;
}